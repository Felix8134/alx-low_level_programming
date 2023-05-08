#include "main.h"

/**
 * create_file - ...
 * @filename: ...
 * @text_content: ...
 * Return: ...
 */
int create_file(const char *filename, char *text_content)
{
	int as, x, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	as = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	x = write(as, text_content, size);

	if (as == -1 || x == -1)
		return (-1);

	close(as);

	return (1);
}
