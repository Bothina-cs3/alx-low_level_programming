#include <stdio.h>
#include <stdlib.h>
/**
 * print_opcodes print of a function
 * @st: starting address
 * @d: end address
*/

void print_opcodes(unsigned char *st, unsigned char *d)
{
	while (st < d)
	{
		printf("%02x", *st);
		if (st + 1 < d)
			printf(" ");
		st++;
	}
	printf("\n");
}

/**
 * main - print prints the opcodes of its own main function.
 * @argc: number of argument
 * @argv: argument
 * Return: 0
*/

int main(int argc, char **argv)
{
	int k;
	unsigned char  *p, *h;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("Error\n");
		return (2);
	}

	p = (unsigned char *)main;
	h = p + k;

	print_opcodes(p, h);

	return (0);
}
