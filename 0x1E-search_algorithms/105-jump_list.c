#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search
 * @size: the number of nodes in list
 * @value: the value to search for
 * Return: pointer to the first node where value is located or NULL
*/

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jmp, i;
	listint_t *c, *p;

	if (!list || size == 0)
		return (NULL);

	jmp = sqrt(size);
	c = list;

	while (c->n < value && c->next)
	{
		p = c;
		i = 0;
		while (c->next && i < jmp)
		{
			c = c->next;
			i++;
		}
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", p->index,
	       c->index);

	c = p;
	while (c->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
		if (c->next)
			c = c->next;
		else
			return (NULL);
	}
	if (c->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", c->index, c->n);
		return (c);
	}

	return (NULL);
}
