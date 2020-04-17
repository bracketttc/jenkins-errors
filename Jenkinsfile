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
        successful {
            recordIssues(tools: [cppCheck()])
        }
    }
}
