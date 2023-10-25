#include "lists.h"
/**
 * *find_listint_loop - Write a function that finds
 * the loop in a linked list.
 * @head: pointer
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *d;

	if (head == NULL)
		return (NULL);
	for (d = head->next; d != NULL; d = d->next)
	{
		if (d == d->next)
			return (d);
		for (p = head; p != d; p = p->next)
			if (p == d->next)
				return (d->next);
	}
	return (NULL);
}
