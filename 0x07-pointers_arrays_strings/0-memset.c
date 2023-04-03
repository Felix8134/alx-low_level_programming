#include "main.h"

/**
 * _memset -insertion
 * @s: input
 * @b: input
 * @n: input
 * Return: Always 0 (success)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
