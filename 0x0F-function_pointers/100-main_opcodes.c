#include <stdio.h>
#include <stdlib.h>

/**
 * main - array
 * @argc: ..
 * @argv: ..
 * Return: 0 Success
 */

int main(int argc, char *argv[])
{
	int x, y;
	int (*a)(int, char **) = main;
	unsigned char b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (y = 0; y < x; y++)
	{
		b = *(unsigned char *)a;
		printf("%.2x", b);
		if (y == x - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
