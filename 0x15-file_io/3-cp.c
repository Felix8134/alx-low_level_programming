#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - ...
 * @file: ...
 * Return: ...
 */

char *create_buffer(char *file)
{
	char *ab;

	ab = malloc(sizeof(char) * 1024);

	if (ab == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (ab);
}

/**
 * close_file - ...
 * @fd: ...
 */

void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: ....
 */

int main(int argc, char *argv[])
{
	int toka, mpaka, x, z;
	char *as;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	as = create_buffer(argv[2]);
	toka = open(argv[1], O_RDONLY);
	x = read(toka, as, 1024);
	mpaka = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (toka == -1 || x == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(as);
			exit(98);
		}

		z = write(mpaka, as, x);
		if (mpaka == -1 || z == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(as);
			exit(99);
		}

		x = read(toka, as, 1024);
		mpaka = open(argv[2], O_WRONLY | O_APPEND);

	} while (x > 0);

	free(as);
	close_file(toka);
	close_file(mpaka);

	return (0);
}
