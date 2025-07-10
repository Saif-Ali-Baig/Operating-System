#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

struct msg_buffer {
    long msg_type;
    char msg_text[100];
};

int main() {
    key_t key = ftok("progfile", 65);
    int msgid = msgget(key, 0666 | IPC_CREAT);
    struct msg_buffer message;
    pid_t pid;

    pid = fork();
    if (pid < 0) {
        perror("Fork failed");
        return 1;
    } else if (pid == 0) {
        msgrcv(msgid, &message, sizeof(message), 1, 0);
        printf("Child received: %s\n", message.msg_text);
    } else {
        message.msg_type = 1;
        strcpy(message.msg_text, "Hello from parent!");
        msgsnd(msgid, &message, sizeof(message), 0);
        wait(NULL);
        msgctl(msgid, IPC_RMID, NULL);
    }

    return 0;
}