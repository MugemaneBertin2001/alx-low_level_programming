#include <stdio.h>
/**
  *main - always success
  * Return: returns 0
*/
int main(void)
{
	int p, d;

	for (p = '0'; p <= '9'; p++)
	{
		for (d = p + 1; d <= '9'; d++)
		{
			putchar(p);
			putchar(d);
			if (p != '8' && d = '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}

