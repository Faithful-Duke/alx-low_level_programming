#include <unistd.h>

/**
 * _putchar - this will write the character c to sdout
 * @c: The character to print
 * Return: 1 (Success).
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
