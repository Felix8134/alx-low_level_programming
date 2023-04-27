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
	char *a;
	int b;
	list_t *x;

	x = malloc(sizeof(list_t));
	if (x == NULL)
		return (NULL);
	a = stra(str);
	if (a == NULL)
	{
		free(x);
		return (NULL);
	}

	for (b = 0; str[b];)
		b++;
	x->str = a;
	x->b = b;
	x->next = *head;
	*head = x;

	return (x);
}
