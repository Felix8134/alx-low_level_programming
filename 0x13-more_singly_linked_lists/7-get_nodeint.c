#include "lists.h"

/**
 * get_nodeint_at_index - ...
 * @head: ...
 * @index: ...
 * Return: ...
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index; x++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
