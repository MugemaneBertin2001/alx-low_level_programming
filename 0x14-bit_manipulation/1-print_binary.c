#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @number: the number to print
 *
 * Return: void
 */
void print_binary(unsigned long int number)
{
    if (number > 1)
        print_binary(number >> 1);

    putchar((number & 1) + '0');
}

