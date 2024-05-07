#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value:  the value to search
 * Return: first index where value is located
*/

int jump_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t jump_step = sqrt(size);
	size_t p = 0;
	size_t c = 0;

	printf("Value checked array[%lu] = [%d]\n", c, array[c]);
	while (c < size && array[c] < value)
	{
		p = c;
		c += jump_step;

		if (c < size)
			printf("Value checked array[%lu] = [%d]\n", c, array[c]);
		else
			printf("Value found between indexes [%lu] and [%lu]\n", p, c);
	}

	c = (c < size) ? c : size - 1;

	printf("Value checked array[%lu] = [%d]\n", p, array[p]);
	printf("Value found between indexes [%lu] and [%lu]\n", p, c);

	for (size_t i = p; i <= c && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
