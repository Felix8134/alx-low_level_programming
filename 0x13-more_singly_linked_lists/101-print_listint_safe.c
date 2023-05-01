#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const list_t *head);

/**
 * looped_listint_len - ...
 * @head: ...
 * Return: ...
 */

size_t looped_listint_len(const listint_t *head);
{
	const listint_t *tortoise, *hare;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tortoise = head->next;
	hare = (head->next)->next;
	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				x++;
				tortoise = tortoise->next;
				hare = hare->next;
			}
			tortoise = tortoise->next;
			while (tortoise != hare)
			{
				x++;
				tortoise = tortoise->next;
			}
			tortoise = tortoise->next;
			hare = (hare->next)->next;
		}
		return (0);
	}
}

/**
 * print_listint_safe - ...
 * @head: ..
 * Return: ..
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t x, y = 0;

	x = looped_listint_len(head);
	if (x == 0)
	{
		for (; head != NULL; x++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (x);
}