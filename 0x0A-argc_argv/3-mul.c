#include <stdio>
#include <stdlib.h>
/**
 * main - prints program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: pointer to array
 * Return: 0
*/

int main(int argc, char **argv)
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Erro\n");
			return (0);
	}

	return (0);
}
