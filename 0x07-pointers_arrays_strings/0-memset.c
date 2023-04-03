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
	int x;

	for (x = 0; x > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
