#include "lists.h"

/**
 * listint_len - ...
 * @h: ...
 * Return: ...
 */

size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
