pipeline {
  agent any
  stages {
    stage('Installing') {
      agent any
      steps {
        echo 'Installing...'
        sh '''cd googletest
mkdir build
cd build
sudo cmake ..
make
sudo make install'''
      }
    }

  }
}