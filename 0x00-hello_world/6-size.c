#include <stdio.h>
/**
*main - output the size values
*
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of a short: %d byte(s)\n", sizeof(short));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long: %d byte(s)\n", sizeof(long));
printf("Size of a long long: %d byte(s)\n", sizeof(long long));
printf("Size of a float: %d byte(s)\n", sizeof(float));
printf("Size of a double: %d byte(s)\n", sizeof(double));
printf("Size of a long double: %d byte(s)\n", sizeof(long double));
return (0);
}
