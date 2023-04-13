#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - memory
 * @s1: string
 * @s2: string
 * @n: int
 * Return: pnt
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int w = 0, x = 0, y = 0, z = 0;
	char *c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[w])
		w++;
	while (s2[x])
		x++;
	if (n >= x)
		z = w + x;
	else
		z = w + n;
	c = malloc(sizeof(char) * z + 1);
	if (c == NULL)
		return (NULL);
	x = 0;
	while (y < z)
	{
		if (y <= w)
			c[y] = s1[y];
		if (y >= w)
		{
			c[y] = s2[x];
		}
		y++;
	}
	c[y] = '\0';
	return (c);
}
