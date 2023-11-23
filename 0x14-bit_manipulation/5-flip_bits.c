#include "main.h"
/**
 * flip_bits - that returns the number of bits you would need to
 * flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: returns the number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned long int num = 0;

	while (x)
	{
		if (x & 1ul)
			num++;
		x = x >> 1;
	}
	return (num);
}
