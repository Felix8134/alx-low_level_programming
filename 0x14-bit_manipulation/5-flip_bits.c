#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shwili = n ^ m, x = 0;

	while (shwili > 0)
	{
		x += (shwili & 1);
	}
	return (x);

}
