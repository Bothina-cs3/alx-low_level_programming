#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: int
 * @argv: argument
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*fc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	fc = get_op_func(argv[2]);

	printf("%d\n", fc(num1, num2));

	return (0);
}

