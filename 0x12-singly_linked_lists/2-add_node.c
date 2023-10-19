#include "lists.h"
/**
 * *add_node - nadds a new node at the end of a list_t list.
 * @head: head node
 * @str: string
 * Return: address of the new element, or NULL if it faile
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

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

	while (str[len])
		len++;

	newnode->len = len;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}
