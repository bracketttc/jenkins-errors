pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                sh 'mkdir -p build && cd build && rm -rf && cmake .. && make'
            }
        }
    }
    post {
        success {
            recordIssues(tools: [cppCheck()])
        }
    }
}
