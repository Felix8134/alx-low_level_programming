#include "lists.h"
#include <stdlib.h>

/**
 * free_list - ..
 * @head: ..
 */

void free_list(list_t *head)
{
	list_t *x;

	while (head)
	{
		x = head->next;
		free(head->next);
		free(head);
		head = x;
	}
}
