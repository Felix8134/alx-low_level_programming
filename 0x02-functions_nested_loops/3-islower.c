#include "main.h"

/**
 * _islower -checks if c is  lowercase
 * main - check the code.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
