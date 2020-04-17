pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'mkdir build && cd build && cmake .. && make'
            }
        }
    }
    post {
        success {
            recordIssues(tools: [cppCheck()])
        }
    }
}
