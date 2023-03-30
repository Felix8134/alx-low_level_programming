#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @y:pointer
 *
 * Retutn: y
 */

char *string_toupper(char *y)
{
	int x;

	for (x = 0 ; y[x] != '\0' ; x++)
	{
		if (y[x] >= 'a' && y[x] <= 'z')
			y[x] = y[x] - 32;
	}
	return (y);
}
