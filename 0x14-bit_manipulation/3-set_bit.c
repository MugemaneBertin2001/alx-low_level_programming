#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @f: decimal number passed by pointer
 * @j: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *f, unsigned int j)
{
	unsigned long int p;

	if (j > 64)
		return (-1);

	for (p = 1; j > 0; j--, p *= 2)
		;
	*f += p;

	return (1);
}
