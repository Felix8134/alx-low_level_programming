#include "main.h"

/**
 * reverse_array -print reverse
 * @n: input
 * @a: inputs
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n / 2 ; x++)
	{
		y = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = y;
	}
}
