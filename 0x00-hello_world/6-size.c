#include <stdio.h>
/**
*main - output the size values
*Return: return 0
*/
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of short: %ld byte(s)\n", sizeof(short));
	printf("Size of long: %ld byte(s)\n", sizeof(long));
	printf("Size of long long: %ld byte(s)\n", sizeof(long long));
	return (0);
}
