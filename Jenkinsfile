pipeline {
  agent any
  stages {
    stage('Install') {
      steps {
        sh '''sudo apt install libgtest-dev
cd /usr/src/gtest sudo && cmake CMakeLists.txt && sudo make
sudo cp libgtest.a libgtest_main.a /usr/lib'''
      }
    }

  }
}