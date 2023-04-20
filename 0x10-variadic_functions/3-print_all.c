#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - ..
 * @format: ..
 * @...: ..
 * Return: ..
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *y;
	char *z = "";

	va_list a;

	va_start(a, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", z, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", z, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", z, va_arg(a, double));
					break;
				case 's':
					y = va_arg(a, char*);
					if (!y)
						y = "(nil)";
					printf("%s%s", z, y);
					break;
				default:
					x++;
					continue;
			}
			z = ", ";
			x++;
		}
	}
	printf("\n");
	va_end(a);
}
