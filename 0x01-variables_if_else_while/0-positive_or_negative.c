#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - perform task
*Return: Returns 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() % 201 - 100;
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else
	{
		printf("is negative\n");
	}
	return (0);
}

