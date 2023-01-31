
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
        sh 'g++ main.py -o main'
      }
    }
    stage('output'){
      steps{
        sh './main'
      }
    }
  }
}
