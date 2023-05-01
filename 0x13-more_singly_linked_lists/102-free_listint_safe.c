#include "lists.h"

/**
 * free_listint_safe - ...
 * @h: ...
 * Return: ...
 */

size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *deg;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			deg = (*h)->next;
			free(*h);
			*h = deg;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}
	*h = NULL;
	return (x);
}
