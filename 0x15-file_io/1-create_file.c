#include "main.h"
/**
 * _strlen - return the length
 * @s: the string
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * create_file - Create a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: text to write
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t b = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fp == -1)
		return (-1);
	if (len)
		b = write(fp, text_content, len);
	close(fp);
	return (b == len ? 1 : -1);
}
