#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

int main() {
    struct stat file_stat;
    
    // Get file status
    if (stat("output.txt", &file_stat) == -1) {
        perror("Error getting file status");
        return 1;
    }
    
    printf("File Size: %ld bytes\n", file_stat.st_size);
    printf("Last Modified: %s", ctime(&file_stat.st_mtime));
    printf("Permissions: %o\n", file_stat.st_mode & 0777);
    
    return 0;
}