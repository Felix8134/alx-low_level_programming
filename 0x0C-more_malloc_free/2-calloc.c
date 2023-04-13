#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory
 * @nmemb: int
 * @size: int
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int x = 0;
	int y = 0;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = nmemb * size;
	c = malloc(y);
	if (c == NULL)
		return (NULL);
	while (x < y)
	{
		c[x] = 0;
		x++;
	}
	return (c);
}
