#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: the number of arguments
 * @argv: pointer array
 * Return: 0
*/

int main(int argc, char **argv)
{
	int sum = 0;
	int *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atio(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
