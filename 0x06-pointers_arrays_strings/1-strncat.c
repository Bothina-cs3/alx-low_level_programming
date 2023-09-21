#include "main.h"
/**
 * *_strncat - function that concatenates
 *			two strings.
 *
 * @dest: pointer input
 * @src: pointer input
 * @n: most number of bytes from src
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	l = 0;
	while (dest[l])
		l++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[l + i] = src[i];

	dest[l + i] = '\0';

	return (dest);
}
