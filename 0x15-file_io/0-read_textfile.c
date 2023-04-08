#include <stdio.h>
#include <stdlib.h>

void print_file(char *filename) {
    FILE *fp;
    char c;

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s.\n", filename);
        exit(1);
    }

    while ((c = fgetc(fp)) != EOF) {
        putchar(c);
    }

    fclose(fp);
}

