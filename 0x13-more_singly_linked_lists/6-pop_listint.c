#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer
 * Return: value of node
*/

int pop_listint(listint_t **head)
{
	listint_t *p;
	int n;

	if (!head || !*head)
		return (0);
	p = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = p;
	return (n);
}
