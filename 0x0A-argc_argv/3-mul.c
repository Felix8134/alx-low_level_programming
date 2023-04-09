#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -function
 * @argc: argument
 * @argv: argument
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int x = 0;
	int y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
