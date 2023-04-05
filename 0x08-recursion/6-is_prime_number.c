#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - function
 * @n: input
 *
 * Return: Always 0 Success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Function
 * @n: input
 * @x: input
 * Return: Always 0 Success
 */
int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
