#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
#define READ_BUF_SIZE 1024

/**
 * main - program that copies the content of a file to another file.
 * @ac: argument count
 * @av: argument
 * Return: 1 on success and 0 on failure
*/

int main(int ac, char *av[])
{
	int form_fp = 0, to_fp = 0;
	ssize_t b;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	form_fp = open(av[1], O_RDONLY);
	if (form_fp == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_fp = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fp == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(form_fp, buf, READ_BUF_SIZE)) > 0)
	{
		if (write(to_fp, buf, b) != b)
		{
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]);
					exit(98);
		}
	}
	if (b == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]);
		exit(98);
	}
	if (close(form_fp) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, form_fp), exit(100);

	if (close(to_fp) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, to_fp), exit(100);
	return (EXIT_SUCCESS);
}
