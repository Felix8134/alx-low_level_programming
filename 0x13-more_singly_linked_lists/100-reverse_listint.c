#include "lists.h"

/**
 * reverse_listint - ...
 * @head: ...
 * Return: ...
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = next;
	}
	*head = first;
	return (*head);
}
