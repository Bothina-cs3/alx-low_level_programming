#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: pointer
 * @src: area
 * @n: length of area
 * Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
