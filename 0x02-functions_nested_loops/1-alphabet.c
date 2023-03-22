#include "main.h"
/**
 * print_alphabets - prints all alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabets(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
