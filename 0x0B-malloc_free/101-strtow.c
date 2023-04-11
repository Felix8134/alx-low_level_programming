#include "main.h"
#include <stdio.h>

/**
 * strtow - 
 * @str: 
 * Return: 0Success
 */

char **strtow(char *str)
{
	int x, z, y;

	x = 0;
	y = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] == ' ')
		x = 0;
		else if (x == 0)
		{
			x = 1;
			y++;
		}
	}
	return (y);	
}
