#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: argument
 * @argv: argument
 * Return: 0 Always Success
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int w[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	z = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	for (y = 0; y < 5 && x >= 0; y++)
	{
		while (x >= w[y])
		{
			z++;
			x -= w[y];
		}
	}

	printf("%d\n", z);
	return (0);
}
