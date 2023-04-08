#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @sentence: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char sentence)
{
	return (write(1, &sentence, 1));
}
