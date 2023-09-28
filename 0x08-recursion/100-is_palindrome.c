#include "main.h"
/**
 * last_index - return the last index of string
 * @s: pointer the string
 * Return: intger
*/

int is_palindrome(char *s);
int chech(char *s, int st, int d, int m);
int last_index(char *s)
{
	int p = 0;

	if (*s > '\0')
		p += last_index(s + 1) + 1;
	return (p);
}

/**
 * is_palindrome - a function that returns 1 if
 *		a string is a palindrome and 0 if not
 * @s: string to chech
 * Return: 1 ot 0
*/

int is_palindrome(char *s)
{
	int d = last_index(s);

	return (chech(s, 0, d - 1, d % 2));
}

/**
 * chech - checher that palindrome
 * @s: string
 * @st: intger
 * @d: intger
 * @m: integer
 * Return: 0 or 1
*/

int chech(char *s, int st, int d, int m)
{
	if ((st == d && m != 0) || (st == d + 1 && m == 0))
		return (1);
	else if (s[st] != s[d])
		return (0);
	else
		return (chech(s, st + 1, d - 1, m));
}



