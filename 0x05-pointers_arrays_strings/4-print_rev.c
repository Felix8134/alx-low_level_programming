#include "main.h"

/**
 * print_rev -prints reverse statement
 * @s: input string
 * Return: reverse string
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (i = 0 ; s[i] != '\0' ; i++)
		count++;
	while (i = count ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}