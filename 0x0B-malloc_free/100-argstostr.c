#include "main.h"
#include <stdlib.h>

/**
 * argstostr - array
 * @ac: input
 * @av: input
 * Return: Always 0 Success
 */

char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *x;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			d++;
			b++;
		}
		b = 0;
		a++;
	}
	x = malloc((sizeof(char) * d) + ac + 1);
	a = 0;
	while (av[a])
	{
		while (av[a][b])
		{
			x[c] = av[a][b];
			c++;
			b++;
		}
		x[c] = '\n';

		b = 0;
		c++;
		a++;
	}
	c++;
	x[c] = '\0';
	return (x);
}
