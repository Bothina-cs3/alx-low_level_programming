#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer
 * @index: the index of the node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	for (node = head, i = 0; node && i < index; node = node->next, i++)
		;
	return (node);
}
