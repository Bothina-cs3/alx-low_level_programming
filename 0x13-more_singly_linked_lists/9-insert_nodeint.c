#include "lists.h"
/**
 * *insert_nodeint_at_index -  a function that inserts
 * a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node
 * @n: value of new node
 * Return: address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *newnode;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!head || !newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (!idx)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	node = *head;
	while (node)
	{
		if (i == idx - 1)
		{
			newnode->next = node->next;
			node->next = newnode;
			return (newnode);
		}
		i++;
		node = node->next;
	}
	free(newnode);
	return (NULL);
}
