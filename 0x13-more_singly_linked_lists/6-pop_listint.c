#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer
 * Return: 0
*/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int i;

	if (!head || !*head)
		return (0);
	p = (*head)->next;
	i = (*head)->i;
	free(*head);
	*head = p;
	return (i);
}
