#include "function_pointers.h"

/**
 * int_index - int
 * @array: ..
 * @size: ..
 * @cmp: ..
 * Return: null
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		if (cmp(array[y]))
			return (y);
	}
	return (-1);
}
