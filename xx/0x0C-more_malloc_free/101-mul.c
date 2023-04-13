#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
 * is_digit - checks if a string contains a non-digit char
 * @c: string to be evaluated
 * Return: 0 if a non-digit is found, 1 otherwise
 */

int is_digit(char *c)
{
	int x = 0;

	while (c[x])
	{
		if (c[x] < '0' || c[x] > '9')
			return (0);
		x++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @c: string to evaluate
 * Return: the length of the string
 */

int _strlen(char *c)
{
	int x = 0;

	while (c[x] != '\0')
	{
		x++;
	}
	return (x);
}

/**
 * errors - handles errors for main
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])

{
	char *a;
	char *b;
	int x, y, z, k, c, d, d2, *q, w = 0

	a = argv[1], b = argv[2];
	if (argc != 3 || !is_digit(a) || !is_digit(b))
		errors();
	x = _strlen(a);
	b = _strlen(b);
	z = x + y + 1;
	q = malloc(sizeof(int) * z);
	if (!q)
		return (1);
	for (k = 0; k <= x + y; k++)
		q[k] = 0;
	for (x = x - 1; x >= 0; x--)
	{
		d = a[x] - '0';
		c = 0;
		for (y = _strlen(b) - 1; y >= 0; y--)
		{
			d2 = a[y] - '0';
			c += q[x + y + 1] + (d * d2);
			q[x + y + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			q[x + y + 1] += c;
	}
	for (k = 0; k < z - 1; k++)
	{
		if (q[k])
			w = 1;
		if (w)
			_putchar(q[k] + '0');
	}
	if (!w)
		_putchar('0');
	_putchar('\n');
	free(q);
	return (0);
}
