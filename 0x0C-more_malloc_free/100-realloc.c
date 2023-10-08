#include "main.h"
/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory allocated with malloc:malloc(old_size)
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 * Return: NULL If new_size is equal to zero, and ptr is not
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL)
				return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)m + i) = *((char *)ptr + i);
		free(ptr);
	}
	return (m);
}

