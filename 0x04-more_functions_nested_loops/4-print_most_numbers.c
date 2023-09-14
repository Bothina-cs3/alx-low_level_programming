#include "main.h"
/**
 * print_most_numbers - print 0 - 9 apart
 * from 2 and 4 and you can
 * only use _putchar twice
 * Return: Always 0 (Success)
*/

void print_most_numbers(void)
{
	char ch;

	for (ch = 0; ch <= 9; ch++)
	{
		if (ch == 2 || ch == 4)
			continue;
			_putchar(ch);
	}
	_putchar('\n');
}
