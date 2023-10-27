#include "main.h"
/**
 * print_binary - that prints the binary representation of a number
 * @n: the number
*/

void print_binary(unsigned long int n)
{
	int bit, printed = 0;

	bit = sizeof(n) * 8, printed = 0;
	while (bit)
	{
		if (n & 1l << --bit)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
