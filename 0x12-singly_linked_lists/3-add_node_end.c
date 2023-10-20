#include "lists.h"
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer head
 * @str: string
 * Return: address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *pm;

	if (str == NULL)
		return (NULL);
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
			return (NULL);
	}

	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		pm = *head;
		while (pm->next != NULL)
			pm = pm->next;
		pm->next = newnode;
	}
	return (newnode);
}
