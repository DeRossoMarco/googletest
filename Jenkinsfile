pipeline {
  agent any
  stages {
    stage('Install') {
      steps {
        sh '''apt install libgtest-dev
cd /usr/src/gtest
cmake CMakeLists.txt
make
cp libgtest.a libgtest_main.a /usr/lib'''
      }
    }

  }
}