#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main -function
 * @argc: argument
 * @argv: argument
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int x;
	unsigned int y, sum = 0;
	char *w;

	if (argc > 1)
	{
		for (x = 1; x < argc; x++)
		{
			w = argv[x];
			for (y = 0; y < strlen(w); y++)
			{
				if (w[x] < 48 || w[x] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(w);
		w++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
