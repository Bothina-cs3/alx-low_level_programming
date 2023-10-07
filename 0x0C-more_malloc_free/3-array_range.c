#include "main.h"
/**
 * *array_range - that creates an array of integers.
 * @min: integer
 * @max: max integer
 * Return: pointer to the newly created arra
*/

int *array_range(int min, int max)
{
	int l, i;
	int *ptr;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	ptr = malloc(sizeof(int) * l);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		ptr[i] = min++;
	return (ptr);
}
