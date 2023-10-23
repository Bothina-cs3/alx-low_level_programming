#include "lists.h"
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to heder
 * @n: newnode
 * Return: address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *newnode, *p;

	newnode = malloc(sizeof(listint_t));
	if (!head || !newnode)
		return (NULL);

	newnode->next = NULL;
	newnode->n = n;
	if (!*head)
		*head = newnode;
	else
	{
		p = *head;
		while (p->next)
			p = p->next;
		p->next = newnode;
	}
	return (newnode);
}
