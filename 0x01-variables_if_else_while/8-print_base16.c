#include <stdio.h>
/**
  *main - always success
  * Return: returns 0
*/
int main(void)
{
	int c;
	char low;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	printf("\n");
	return (0);
}
