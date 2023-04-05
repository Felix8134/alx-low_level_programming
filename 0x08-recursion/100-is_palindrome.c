#include "main.h"

int check_pal(char *s, int x, int y);
int _strlen_recursion(char *s);

/**
 * is_palindrome - function
 * @s: input
 * Return: Always 0 success
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - function
 * @s: input
 * Return: Aways 0 Success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - function
 * @s: input
 * @x: input
 * @y: input
 * Return: Always 0 Success
 */
int check_pal(char *s, int x, int y)
{
	if (*(s + x) != *(s + y - 1))
		return (0);
	if (x >= y)
		return (1);
	return (check_pal(s, x + 1, y - 1));
}
