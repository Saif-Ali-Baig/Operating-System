#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    int pipefd[2];
    pid_t pid;
    char buf[100];
    const char* msg = "Hello from parent!";

    if (pipe(pipefd) == -1) {
        perror("Pipe failed");
        return 1;
    }

    pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        close(pipefd[1]);
        read(pipefd[0], buf, 100);
        printf("Child received: %s\n", buf);
        close(pipefd[0]);
    } else {
        close(pipefd[0]);
        write(pipefd[1], msg, strlen(msg)+1);
        close(pipefd[1]);
        wait(NULL);
    }

    return 0;
}