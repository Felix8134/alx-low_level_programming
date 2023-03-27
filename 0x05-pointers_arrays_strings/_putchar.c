#include <unistd.h>

/**
 * _putchar - writes character to stdout
 * @c: char
 *
 * Return: Always 0
 * on error, -1 is returned, and error is set approximately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
