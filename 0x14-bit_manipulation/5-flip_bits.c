#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @night: first number
 * @mine: second number to convert to
 * Return: number of bits that was needed to flip
 */
unsigned int flip_bits(unsigned long int night, unsigned long int mine)
{
	unsigned long int difference;
	int C;

	difference = night ^ mine;
	C = 0;

	while (difference)
	{
		C++;
		difference &= (difference - 1);
	}

	return (C);
}

