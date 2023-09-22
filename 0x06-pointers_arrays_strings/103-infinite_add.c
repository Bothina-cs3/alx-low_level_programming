#include "main.h"
/**
 * *infinite_add - function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result linght
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, l = 0, a, b, sum, big;

	while (n1[i] != '\0')
		i++;

	while (n2[j] != '\0')
		j++;

	if (i > j)
		big = i;
	else
		big = j;
	if ((big + 1) >= size_r)
		return (0);
	r[big + 1] = '\0';

	while (big >= 0)
	{
		a = (n1[i - 1] - '0');
		b = (n1[j - 1] - '0');
		if (i > 0 && j > 0)
			sum = a + b + l;
		else if (i < 0 && j > 0)
			sum = b + l;
		else if (i > 0 && j < 0)
			sum = a + l;
		else
			sum = l;

		if (sum > 9)
		{
			l = sum / 10;
			sum = (sum % 10) + '0';
		}
		else
		{
			l = 0;
			sum = sum + '0';
		}

		r[big] = sum;

		i--;
		j--;
		big--;
	}

	if (*(r) != 0)
		return (r);
	else
		return (r + 1);
}
