#include "main.h"

/**
 * leet -replaces letters
 * @z: input
 * Return: z
 */

char *leet(char *z)
{
	int x;
	int j;

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (x = 0 ; z[x] != '\0'; x++)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (z[x] == a[j])
			{
				z[x] = b[j];
			}
		}
	}
	return (z);
}
