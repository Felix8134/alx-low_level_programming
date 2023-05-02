#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - ...
 * @head: ...
 * Return: ...
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *opuk, *apuoyo;
	size_t x = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	opuk = head->next;
	apuoyo = (head->next)->next;

	while (apuoyo)
	{
		if (opuk == apuoyo)
		{
			opuk = head;
			while (opuk != apuoyo)
			{
				x++;
				opuk = opuk->next;
				apuoyo = apuoyo->next;
			}

			opuk = opuk->next;
			while (opuk != apuoyo)
			{
				x++;
				opuk = opuk->next;
			}

			return (x);
		}

		opuk = opuk->next;
		apuoyo = (apuoyo->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - ...
 * @head: ...
 * Return: ...
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
	}

	else
	{
		for (y = 0; y < x; y++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (x);
}

