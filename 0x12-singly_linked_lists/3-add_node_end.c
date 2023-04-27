#include "lists.h"
#include <string.h>

/**
 * add_node_end - ..
 * @head: ..
 * @str: ..
 * Return: ..
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *a;
	int b;
	list_t *x, *y;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	a = stra(str);
	if (str == NULL)
	{
		free(x);
		return (NULL);
	}
	for (b = 0; str[b];)
		b++;
	x->str = a;
	x->b = b;
	x->next = NULL;
	if (*head == NULL)
		*head = x;
	else
	{
		y = *head;
		while (y->next != NULL)
			y = y->next;
		y->next = x;
	}
	return (*head);
}
