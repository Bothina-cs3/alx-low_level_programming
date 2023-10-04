#include "main.h"
/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL if str = NULL
 *
*/

char *_strdup(char *str)
{
	char *ptr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[size] != '\0'; i++)
		ptr = malloc(size * sizeof(str) + 1);

	if (ptr == 0)
		return (NULL);

	else
	{
		for (i = 0; i < size; i++)
			ptr[i] = str[i];
	}
	return (ptr);
}
