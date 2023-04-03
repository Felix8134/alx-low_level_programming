#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function
 * @a: input
 * @size: input
 * Return: Always 0 Success
 */

void print_diagsums(int *a, int size)
{
	int x, y, total1, total2;

	for (x = 0; x <= (size * size); x = x + size + 1)
		total1 = total1 + a[x];
	for (y = size - 1; y <= (size * size) - size; y = y + size - 1)
		total2 = total2 + a[y];
	printf("%d, ", total1);
	printf("%d\n", total2);
}
