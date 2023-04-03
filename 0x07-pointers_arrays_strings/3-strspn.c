#include "main.h"

/**
 * _strspn -retuns length
 * @s: input
 * @accept: allows length
 * Return: Always 0 success
 */

unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
