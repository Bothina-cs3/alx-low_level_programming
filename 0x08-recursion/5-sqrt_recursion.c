#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: input
 * @b: square root
 * Return: square root of a number.
*/

int square(int n, int b);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - square root
 * @n: input
 * @b: square root
 * Return: square root
*/

int square(int n, int b)
{
	if (b * b == n)
	{
		return (b);
	}
	else if (b * b < n)
	{
		return (square(n, b + 1));
	}
	else
		return (-1);
}
