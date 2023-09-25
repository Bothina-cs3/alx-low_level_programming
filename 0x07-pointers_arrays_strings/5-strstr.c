#include "main.h"
/**
 * *_strstr - function that locates a substring.
 * @haystack: first string
 * @needle: second string
 * Return: pointer to the beginning of the located substring
*/

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return ('\0');
}
