#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - ..
 * @separator: ..
 * @n: ..
 * @...: ..
 * Return: ..
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *y;
	unsigned int z;

	va_start(x, n);
	for (z = 0; z < n; z++)
	{
		y = va_arg(x, char *);
		if (y == NULL)
			printf("(nil)");
		else
			printf("%s", y);
		if (z != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
