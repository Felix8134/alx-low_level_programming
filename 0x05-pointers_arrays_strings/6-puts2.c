#include "main.h"

/**
 *  puts2 -prints character of a string
 *  @str: print string
 *  Return: Always 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
