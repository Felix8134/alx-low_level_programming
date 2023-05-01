#include "lists.h"

/**
 * find_listint_loop - ...
 * @head: ...
 * Return: ...
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pole = head;
	listint_t *haraka = head;

	if (!head)
		return (NULL);

	while (pole && haraka && haraka->next)
	{
		haraka = haraka->next->next;
		pole = pole->next;
		if (haraka == pole)
		{
			pole = head;
			while (pole != haraka)
			{
				pole = pole->next;
				haraka = haraka->next;
			}
			return (haraka);
		}
	}
	return (NULL);
}
