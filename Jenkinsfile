pipeline {
  agent any
  stages {
    stage('Installing') {
      agent any
      steps {
        echo 'Installing...'
        sh '''git clone https://github.com/DeRossoMarco/googletest.git
cd googletest
mkdir build
cd build
cmake ..
make
sudo make install'''
      }
    }

  }
}