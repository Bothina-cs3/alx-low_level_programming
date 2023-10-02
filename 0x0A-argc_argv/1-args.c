#include <stdio.h>
/**
 * main - print program that prints the number
 * of arguments passed into it.
 * @argc: number of arguments
 * @argv: pointer to array
 * Return: 0
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
