#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
