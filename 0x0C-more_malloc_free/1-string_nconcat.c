#include "main.h"
/**
 * *string_nconcat - function that concatenates two strings
 * @s1: ferist streing
 * @s2: second string
 * @n: bytes of s2
 * Return: pointer shall point to a newly allocated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, s1_len, s2_len;

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;
	s1_len = (s1 != NULL);
	s2_len = (s2 != NULL);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
