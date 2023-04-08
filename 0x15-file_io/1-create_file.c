#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int create_file(const char *filename) {
    // Open the file for writing, creating it if it doesn't exist
    int fd = open(filename, O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
    if (fd == -1) {
        perror("open");
        return -1;
    }

    // Close the file and return success
    close(fd);
    return 0;
}

