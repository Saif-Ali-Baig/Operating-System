#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

int main() {
    key_t key = ftok("shmfile", 65);
    int shmid = shmget(key, 1024, 0666 | IPC_CREAT);
    char *str = (char*) shmat(shmid, NULL, 0);
    pid_t pid;

    pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        printf("Child read: %s\n", str);
        shmdt(str);
    } else {
        strcpy(str, "Hello from parent!");
        wait(NULL);
        shmdt(str);
        shmctl(shmid, IPC_RMID, NULL);
    }

    return 0;
}