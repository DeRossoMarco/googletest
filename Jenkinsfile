pipeline {
  agent any
  stages {
    stage('Build') {
      agent any
      steps {
        echo 'Building...'
        dir(path: '/home/ubuntu/googletest/googletest/samples') {
          sh 'g++ -o sample10_unittest.cc -lgtest -lpthread'
        }

      }
    }

  }
}