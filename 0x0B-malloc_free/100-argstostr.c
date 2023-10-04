#include "main.h"
/**
 * _strlen - find lenght of string
 * @s: string
 * Return: intger
*/

int _strlen(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *argstostr - function that concatenates
 * all the arguments of your program.
 * @ac: intger
 * @av: arguments
 * Return: pointer to a new string,
*/

char *argstostr(int ac, char **av)
{
	int i, nc = 0, j, p = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, p++)
			s[p] = av[i][j];

		s[p] = '\n';
		p++;
	}
	s[p] = '\0'
		return (s);
}
