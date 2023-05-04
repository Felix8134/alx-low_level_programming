#include "main.h"

/**
 * get_endianness - ...
 * Return: ...
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *y = (char *) &x;

	return (*y);
}
