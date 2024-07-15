#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size:  the number of elements in array
 * @value: the value to search
 * Return: the index where value is located
*/

int advanced_binary(int *array, size_t size, int value)
{
	if (array)
		return (binary_rec(array, 0, size - 1, value));

	return (-1);
}
/**
 * binary_rec - searches for a value in an array of integers recursively
 *
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the search range
 * @right: ending index of the search range
 * @value: value to search for
 * Return: the index where value is located or -1 on failure or not found
 */

int binary_rec(int *array, size_t left, size_t right, int value)
{
	size_t i = 0;

	if (array)
	{
		if (left <= right)
		{
			print_array(array, left, right);
			i = (left + right) / 2;

			if (array[left] == value)
				return (left);

			if (value == array[i] && array[i - 1] != value)
				return (i);
			if (value > array[i])
				return (binary_rec(array, i + 1, right, value));
			if (value <= array[i])
				return (binary_rec(array, left, i, value));
		}
	}

	return (-1);
}

/**
 * print_array - prints the array of ints, separated with commas
 *
 * @array: a pointer to the array to print
 * @first: the first index to print
 * @last: the last index to print
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}
