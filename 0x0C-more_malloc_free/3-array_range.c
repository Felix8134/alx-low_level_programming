#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - ..
 * @min: ..
 * @max: ..
 * Return: null
 */

int *array_range(int min, int max)
{
	int *x;
	int y = 0;

	if (min > max)
		return (NULL);
	x = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (x == NULL)
		return (NULL);
	while (min <= max)
	{
		x[y] = min;
		y++;
		min++;
	}
	return (x);
}
