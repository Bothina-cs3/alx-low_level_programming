#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer string
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to integer
 * @s: char
 * Return: integer
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int p = 0, fNum, i;

	for (fNum = 0; !(s[fNum] >= 48 && s[fNum] <= 57); fNum++)
	{
		if (s[fNum] == '-')
		{
			sign *= -1;
		}
	}

	for (i = fNum; s[i] >= 48 && s[i] <= 57; i++)
	{
		p *= 10;
		p += (s[i] - 48);
	}
	return (sign * p);

/**
 * print_int - print integer
 * @n: integer
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, r;

	for (i = 0; n / d > 9; i++, d *= 10)
	;

	for (; d >= 1; n %= d, d /= 10)
	{
		r = n / d;
		_putchar('0' + r);
	}
}

/**
 * main - print program that multiplies two positive numbers.
 * @argc: integer
 * @argv: list
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}

	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}
