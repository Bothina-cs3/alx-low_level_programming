#include "main.h"
/**
 * print_square - print a square using the character #
 *
 * @size: is the size of the square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int row, colum;

	if (size <= 0)
	{
		_putchar('\n');

		return;
	}

	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
