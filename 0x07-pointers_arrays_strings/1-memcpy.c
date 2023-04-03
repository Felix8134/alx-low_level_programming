#include "main.h"

/**
 * _memcpy -function
 * @dest: memory
 * @src: memory
 * @n: input
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x;
	int y = n;

	for (x = 0; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
