#include "search_algos.h"
/**
 * interpolation_search - searches for a value in a sorted array of
 * integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located
*/

int interpolation_search(int *array, size_t size, int value)
{
	size_t i = 0, l = 0, h = size - 1;

	if (array)
	{
		while ((value >= array[l]))
		{
			i = l + (((double)(h - l) /
						(array[h] - array[l])) * (value - array[l]));

			if (i > size)
			{
				printf("Value checked array[%lu] is out of range\n", i);
				break;
			}

			printf("Value checked array[%lu] = [%d]\n", i, array[i]);

			if (array[i] < value)
				l = i + 1;
			else if (array[i] > value)
				h = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
