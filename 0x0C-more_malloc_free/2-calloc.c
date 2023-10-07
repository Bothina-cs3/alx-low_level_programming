#include "main.h"
/**
 * *_memset - fills memory
 * @s: pointre
 * @b: constant
 * @n: max bytes
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - that allocates memory for an array, using mallo
 * @nmemb: array lenght
 * @size: size of element
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *w;

	if (size == 0 || nmemb == 0)
		return (NULL);
	w = malloc(nmemb * size);

	if (w == 0)
		return (NULL);
	_memset(w, 0, nmemb * size);

	return (w);
}
