#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value:the value to search
 * Return: the index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	size_t left = 0;
	size_t right = size - 1;

	while (left <= right)
	{
		size_t mid = (left + right) / 2;

		printf("Searching in array: ");
	for (size_t i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
		else
			printf("\n");
	}

	if (array[mid] == value)
		return (mid);
	else if (array[mid] < value)
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
