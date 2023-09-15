#include <stdio.h>
/**
 * _sqrt - find the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds and print the largest
 *			prime factor of number (num)
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmyu. num;

	/* first divide with the smallest prime number (two) */
	for (prmyu = 3; prmyu <= _sqrt(num); primyu += 2)
	{
		while (num % prmyu == 0)
		{
			num = num / prmyu;
			largest = prmyu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}


