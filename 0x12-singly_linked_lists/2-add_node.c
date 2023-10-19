#include "lists.h"
/**
 * *add_node_end -nadds a new node at the end of a list_t list.
 * @head: head node
 * @str: string
 * Return: address of the new element, or NULL if it faile
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i, num = 0;

	new_node = malloc(sizeof(list_t))
		if (new_node == NULL)
			return (NULL)
		new_node->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		num++;
		new_node->len = num;
		new_node->next = *head;
		*head = new_node;
	}
	return (*head);
}
