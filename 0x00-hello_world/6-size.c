#include <stdio.h>

int main() {
    printf("The size of char is %d byte(s).\n", sizeof(char));
    printf("The size of short is %d byte(s).\n", sizeof(short));
    printf("The size of int is %d bytes.(\n)", sizeof(int));
    printf("The size of long is %d bytes.(\n)", sizeof(long));
    printf("The size of long long is %d byte(s).\n", sizeof(long long));
    printf("The size of float is %d byte(s).\n", sizeof(float));
    printf("The size of double is %d byte(s).\n", sizeof(double));
    printf("The size of long double is %d byte(s).\n", sizeof(long double));

    return 0;
}

