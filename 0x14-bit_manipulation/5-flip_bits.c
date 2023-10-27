#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: number
 * Return: returns the number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int p = n ^ m;
	unsigned int num = 0;

	while (p)
	{
		if (p & 1ul)
			num++;
		p = p >> 1;
	}
	return (num);
}
