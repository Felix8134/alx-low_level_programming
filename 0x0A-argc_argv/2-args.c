#include "main.h"
#include <stdio.h>

/**
 * main -function
 * @argc: argument
 * @argv: argument
 * Return: Always 0 Success
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
