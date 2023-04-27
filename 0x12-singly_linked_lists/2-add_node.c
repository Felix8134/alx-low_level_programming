#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - ...
 * @head: ...
 * @str: ...
 * Return: ...
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *x;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(x);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;
	x->str = dup;
	x->len = len;
	x->next = *head;
	*head = x;

	return (x);
}
