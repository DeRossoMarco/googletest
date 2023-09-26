pipeline {
  agent any
  
  stages {
    stage('Checkout') {
      agent any
      steps {
        echo 'Checkout...'
        checkout([$class: 'GitSCM',
                          branches: [[name: '*/main']],
                          doGenerateSubmoduleConfigurations: false,
                          extensions: [],
                          submoduleCfg: [],
                          userRemoteConfigs: [[url: 'https://github.com/DeRossoMarco/googletest.git']]])
      }
    }

    stage('Build library') {
      steps {
        echo 'Building library...'
        dir('build') {
          sh 'cmake .. -DBUILD_GMOCK=OFF'
          sh 'make'
        }
      }
    }
    
    stage('Test library') {
      steps {
        echo 'Testing library...'
        dir('build') {
          sh 'make test'
        }
      }
    }

    stage('Build example') {
      steps {
        echo 'Building example...'
        dir('demo') {
          sh 'g++ -o calc_test calc_test.cpp calc.cpp -I/var/lib/jenkins/workspace/googletest/googletest/include/ -lgtest -lpthread'
        }
      }
    }

    stage('Test example') {
      steps {
        echo 'Testing example...'
        dir('demo') {
          sh './calc_test'
        }
      }
    }

  }
}
