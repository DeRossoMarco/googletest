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

    stage('Build') {
      steps {
        echo 'Building...'
        dir('build') {
                    sh 'cmake .. -DBUILD_GMOCK=OFF'
                    sh 'make'
                    sh 'make install'
                }
      }
    }
    stage('Test') {
            steps {
                dir('build') {
                    sh 'make test'
                }
            }
        }

  }
}
