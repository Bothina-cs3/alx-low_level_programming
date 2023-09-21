#include "main.h"
/**
 * *rot13 - function that encodes a string using rot13
 *
 * @s: string input
 *
 * Return: string
*/

char *rot13(char *s)
{
	char b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int l;

	while (*(s + i) != '\0')
	{
		for (l = 0; l <= 51; l++)
		{
			if (*(s + i) == b[l])
			{
				*(s + i) = rot[l];
				break;
			}
		}
		i++;
	}

	return (s);
}
