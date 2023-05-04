#include "main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0;
	unsigned long int sai;
	unsigned long int baadae = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		sai = baadae >> x;
		if (sai & 1)
			y++;
	}
	return (y);

}
