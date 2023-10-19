#include "lists.h"
/**
 * *add_node - nadds a new node at the end of a list_t list.
 * @head: head node
 * @str: string
 * Return: address of the new element, or NULL if it faile
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len;

	if (str == NULL)
		return (NULL)

	new_node = malloc(sizeof(list_t));
		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
	for (len = 0; str[len] != '\0'; len++)
		new_node->len = len;
		new_node->next = *head;
		*head = new_node;

	return (new_node);
}
