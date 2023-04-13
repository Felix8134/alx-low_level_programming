#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _realloc - memory
 * @ptr: pointer
 * @old_size: int
 * @new_size: int
 * Return: none
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *c;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	for (x = 0; x < old_size && x < new_size; x++)
	{
		c[x] = ((char *) ptr)[x];
	}
	free(ptr);
	return (c);
}