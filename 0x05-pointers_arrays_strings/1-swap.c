#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * using two input
 *
 * @a: input 1
 * @b: input 2
 *
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b =  temp;
}
