#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory
 * @b: bytes
 * Return: Always 0 success
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
