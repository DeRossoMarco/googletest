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

  }
}
