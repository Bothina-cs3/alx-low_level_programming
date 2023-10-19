#include "lists.h"
/**
 * list_len - that returns the number of
 * elements in a linked list_t list.
 * @h: head
 * Return: he number of elements
*/

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
