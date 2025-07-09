#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main() {
    int fd;
    char *filename = "output.txt";
    char buffer[100];
    ssize_t bytes_read;

    // Open file for reading
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return 1;
    }

    // Read data from file
    bytes_read = read(fd, buffer, sizeof(buffer) - 1);
    if (bytes_read == -1) {
        perror("Error reading file");
        close(fd);
        return 1;
    }
    buffer[bytes_read] = '\0'; // Null-terminate the string
    printf("Read %zd bytes: %s", bytes_read, buffer);

    // Close file
    if (close(fd) == -1) {
        perror("Error closing file");
        return 1;
    }

    return 0;
}