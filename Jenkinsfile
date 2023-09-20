pipeline {
  agent any
  stages {
    stage('Build') {
      agent any
      steps {
        echo 'Building...'
        sh '''cd /home/ubuntu/googletest/googletest/samples
g++ -o sample10_unittest.cc -lgtest -lpthread
'''
      }
    }

  }
}