# include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @m: the number to get the bit from
 * @mine: index of the bit to get
 *
 * Return: the value of the bit at the given index, or -1 on failure
 */
int get_bit(unsigned long int m, unsigned int mine)
{
    if (mine >= sizeof(unsigned long int) * 8)
        return (-1);

    return ((m >> mine) & 1);
}


