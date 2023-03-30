#include "main.h"

/**
 * *cap_string -capitalize words
 * @z: capitalized
 * Return: z
 */

char *cap_string(char *z)
{
	int x;

	for (x = 0 ; z[x] != '\0'; x++)
	{
		if (z[x] >= 'A' && z[x] <= 'Z')
			z[x] = z[x] + 32;
	}
	return (z);
}
