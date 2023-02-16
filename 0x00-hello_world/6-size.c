#include <stdio.h>

int main() {
    printf("Size of char is %d byte(s).\n", sizeof(char));
    printf("Size of short is %d byte(s).\n", sizeof(short));
    printf("Size of int is %d bytes.(\n)", sizeof(int));
    printf("Size of long is %d bytes.(\n)", sizeof(long));
    printf("Size of long long:  %d byte(s).\n", sizeof(long long));
    printf("Size of float:  %d byte(s).\n", sizeof(float));
    printf("Size of double:  %d byte(s).\n", sizeof(double));
    printf("Size of long double:  %d byte(s).\n", sizeof(long double));

    return 0;
}

