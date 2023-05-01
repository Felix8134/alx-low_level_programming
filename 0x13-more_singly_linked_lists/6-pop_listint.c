#include "lists.h"

/**
 * pop_listint - ...
 * @head: - ...
 * Return: ...
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int y;

	if (*head == NULL)
		return (0);

	x = *head;
	y = (*head)->n;
	*head = (*head)->next;

	free(x);

	return (y);
}
