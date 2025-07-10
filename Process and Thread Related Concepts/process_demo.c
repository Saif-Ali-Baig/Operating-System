#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    printf("Parent process ID: %d\n", getpid());

    pid = fork();

    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child process ID: %d, Parent ID: %d\n", getpid(), getppid());
        execlp("ls", "ls", "-l", NULL);
        perror("execlp failed");
        return 1;
    } else {
        printf("Parent waiting for child %d to complete...\n", pid);
        wait(NULL);
        printf("Child process completed.\n");
    }

    return 0;
}