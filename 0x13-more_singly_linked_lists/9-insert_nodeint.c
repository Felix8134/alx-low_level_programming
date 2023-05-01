#include "lists.h"

/**
 * insert_nodeint_at_index - ...
 * @head: ...
 * @idx: ...
 * @n: ...
 * Return: ...
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *copy =  *head;
	unsigned int x;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = copy;
		*head = new;
		return (new);
	}
	for (x = 0; x < (idx - 1); x++)
	{
		if (copy == NULL || copy->next == NULL)
			return (NULL);
		copy = copy->next;
	}
	new->next = copy->next;
	copy->next = new;
	return (new);
}
