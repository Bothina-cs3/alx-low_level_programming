#include "main.h"
/**
 * *_strcat - function that concatenates
 *			two strings.
 *
 * @dest: pointre input
 * @src: pointer input
 *
 * Return: pointer to the resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int b, b2;

	b = 0;
	while (dest[b])
		b++;

	for (b2 = 0; src[b2] ; b2++)

	dest[b++] = src[b2];

	return (dest);
}
