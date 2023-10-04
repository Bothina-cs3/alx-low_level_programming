#include "main.h"
/**
 * wrdcnt - count the number of words in string
 * @s: string
 * Return: intger of number of words
*/

int wrdcnt(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++;
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * *strtow - function that splits a string into words
 * @str: string
 * Return: pointer to an array of strings
*/

char **strtow(char *str)
{
	int i = 0, j, p, l, n = 0, wc = 0;
	char **a;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	a = (char **)malloc(n * sizeof(char *));
	if (a == NULL)
		return (NULL);
	a[n - 1] = NULL;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			a[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (a[wc] == NULL)
			{
				for (p = 0; p < wc; p++)
					free(a[p]);
				free(a[n - 1]);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				a[wc][l] = str[i + 1];
			a[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (a);
}
