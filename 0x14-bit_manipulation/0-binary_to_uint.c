#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @binary: pointer to a string of 0's and 1's
 *
 * Return: unsigned int representing the binary number, or 0 if an error occurs
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int i;

	if (!binary)
		return (0);

	for (i = 0; binary[i]; i++)
	{
		if (binary[i] != '0' && binary[i] != '1')
			return (0);

		result <<= 1;
		if (binary[i] == '1')
			result += 1;
	}

	return (result);
}

