#include "hash_tables.h"
/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 * Return: integer after the operations
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long result;

	result = hash_djb2(key) % size;
	return (result);
}
