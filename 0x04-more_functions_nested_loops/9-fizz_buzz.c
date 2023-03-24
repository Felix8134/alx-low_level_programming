#include "main.h"
#include <stdio.h>

/**
 * prints number 1 to 100
 *
 * print Fizz for multiple of 3
 * print Buzz for multiple of 5
 * and FizBuz for multiple of 3 and 5
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x > 0; x < 101; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");
		}
		if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf(x);
			printf(' ');
		}
	}
	printf('\n');
	return (0);
}
