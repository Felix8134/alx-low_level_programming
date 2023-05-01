#include "lists.h"

/**
 * sum_listint - ...
 * @head: ...
 * Return: ...
 */

int sum_listint(listint_t *head)
{
	int a = 0;

	while (head)
	{
		a += head->n;
		head = head->next;
	}
	return (a);
}
