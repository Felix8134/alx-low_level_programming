#include "main.h"

/**
 * _isdigit -check if a is digit (Through 0 to 9)
 * @c: int to be checked
 * Return: 1 for a digit or 0 for any other
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
