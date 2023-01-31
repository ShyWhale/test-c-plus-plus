
pipeline {
  agent any
  stages {
    stage('version') {
      steps {
        echo 'This project pipeline will deal with c++'
      }
    }
    stage('build') {
      steps {
        sh 'g++ main.cpp -o main'
      }
    }
    stage('output'){
      steps{
        sh './main'
      }
    }
  }
}
