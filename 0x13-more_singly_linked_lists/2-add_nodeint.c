#include "lists.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to first node
 * @n: value for newnode
 * Return: pointer to newnode
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!head || newnode)
		return (NULL);

	newnode->n = n;
		newnode->next = *head;
	*head = newnode;
		return (newnode);
}
