#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - ..
 * @head: ..
 * @str: ..
 * Return: ..
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *x, *y;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
		free(x);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	x->str = dup;
	x->len = len;
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
