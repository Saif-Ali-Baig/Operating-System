#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

int main() {
    int fd;
    char *filename = "output.txt";
    char *data = "Hello, UNIX File System!\n";

    // Open file with create, write-only, and truncate flags
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Write data to file
    ssize_t bytes_written = write(fd, data, strlen(data));
    if (bytes_written == -1) {
        perror("Error writing to file");
        close(fd);
        return 1;
    }
    printf("Wrote %zd bytes to %s\n", bytes_written, filename);

    // Close file
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }

    return 0;
}