#include "lists.h"

/**
 * delete_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *x, *copy = *head;
	unsigned int y;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}
	for (y = 0; y < (index - 1); y++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}
	x = copy->next;
	copy->next = x->next;
	free(x);
	return (1);
}
