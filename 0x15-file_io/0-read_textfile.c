#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 * Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *x;
	ssize_t as;
	ssize_t y;
	ssize_t z;

	as = open(filename, O_RDONLY);
	if (as == -1)
		return (0);
	x = malloc(sizeof(char) * letters);
	z = read(as, x, letters);
	y = write(STDOUT_FILENO, x, z);

	free(x);
	close(as);
	return (y);
}

