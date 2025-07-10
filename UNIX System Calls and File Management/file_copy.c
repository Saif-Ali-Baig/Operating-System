#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    int src_fd, dest_fd;
    char buffer[1024];
    ssize_t bytes_read;
    
    // Open source file
    src_fd = open("output.txt", O_RDONLY);
    if (src_fd == -1) {
        perror("Error opening source file");
        return 1;
    }
    
    // Open/create destination file
    dest_fd = open("copy.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (dest_fd == -1) {
       perror("Error opening destination file");
        close(src_fd);
        return 1;
    }
    
    // Copy file contents
    while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0) {
        if (write(dest_fd, buffer, bytes_read) != bytes_read) {
            perror("Error writing to destination file");
            close(src_fd);
            close(dest_fd);
            return 1;
        }
    }
    
    if (bytes_read == -1) {
        perror("Error reading source file");
    }
    
    printf("File copied successfully\n");
    
    // Close file descriptors
    close(src_fd);
    close(dest_fd);
    return 0;
}