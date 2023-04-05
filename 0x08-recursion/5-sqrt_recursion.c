#include "main.h"

int _sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function
 * @n: input
 * Return: Always 0 Success
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt_recursion - function
 * @n: input
 * @i: input
 * Return: Always 0 Success
 */

int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
