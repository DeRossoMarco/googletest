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
                    sh 'cmake ../../..'
                    sh 'make'
                }
      }
    }

  }
}
