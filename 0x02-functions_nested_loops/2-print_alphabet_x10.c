#include "main.h"
/**
 * print_alphabet_10times - print alphabets 10 times
 *
 * Return: Always0 (Success)
 */
void print_alphabet_10times(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
