#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of
 * all its parameters
 * @n: intrger
 * @...: integer
 * Return: the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, s = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		s += x;
	}
	va_end(args);
	return (s);
}
