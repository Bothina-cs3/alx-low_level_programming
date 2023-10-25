#include "lists.h"
/**
 * *find_listint_loop_fl - find aloop in linked list
 * @head: pointer
 * Return: address of node
*/
listint_t *find_listint_loop_fl(listint_t *head)
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

/**
 * free_listint_safe - Write a function that frees a listint_t list
 * @h: pointer
 * Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t l;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);
	loopnode = find_listint_loop_fl(*h);
	for (l = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		l++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			l++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h)
	}
	*h = NULL;
	return (l);
}
