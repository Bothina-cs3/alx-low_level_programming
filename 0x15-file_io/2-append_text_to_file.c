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
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: text to write
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0, len = _strlen(text_content);

        if (!filename)
                return (-1);
        fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
                return (-1);
	if (len)
		bytes = write(fp, text_content, len);
	close(fp);
	return (bytes == len ? 1 : -1);
}
