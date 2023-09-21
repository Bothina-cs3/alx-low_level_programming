#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of the array
*/

void reverse_array(int *a, int n)
{
	int i, l, p;

	for (i = 0, l = (n - 1); i < l; i++, l--)
	{
		p = a[i];
		a[i] = a[l];
		a[l] = p;
	}

}
