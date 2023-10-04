#include "main.h"
/**
 * _strlen - find lenght
 * @s: string
 * Return: intger
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	ptr = malloc((size1 + size2) * sizeof(char) + 1);
	if (ptr == 0)
		return (0);

	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - size1];
	}
	ptr = '\0';
	return (ptr);
}


