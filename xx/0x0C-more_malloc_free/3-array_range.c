#include "main.h"
#include <stdlib.h>

/**
 * array_range - array
 * @min: int
 * @max: int
 * Return: none
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
