#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    pid_t pid = fork();
    
    if (pid == -1) {
        perror("Error in fork");
        return 1;
    }
    
    if (pid == 0) {
        // Child process
        char *args[] = {"ls", "-l", NULL};
        execvp("ls", args);
        perror("Error in execvp");
        return 1;
    } else {
        // Parent process
        wait(NULL);
        printf("Child process completed\n");
    }
    
    return 0;
}