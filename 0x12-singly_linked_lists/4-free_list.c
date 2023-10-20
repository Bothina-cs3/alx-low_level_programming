#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: pointer to head
*/

void free_list(list_t *head)
{
	list_t *pm;

	while (head != NULL)
	{
		pm = head;
		head = head->next;
		free(pm->str);
		free(pm);
	}
}
