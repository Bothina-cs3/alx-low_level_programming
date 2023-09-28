#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0
 * @b: input
 * @n: input
 * Return:  1 if the input integer is a prime number or 0
*/

int chech_prime(int n, int b);
int is_prime_number(int n)
{
	return (chech_prime(n, 2));
}

/**
 * chech_prime - chech all namber
 * @n: input
 * @b: input
 * Return: int
*/

int chech_prime(int n, int b)
{
	if (b >= n && n > 1)
	{
		return (1);
	}
	else if (n % b == 0 || n <= 1)
	{
		return (0);
	}
	else
		return (chech_prime(n, b + 1));
}
