#include "main.h"
/**
 * rev_string -  reverses a string
 *
 * @s: string input
 *
*/

rev_string(char *s)
{
	int l, i;
	char pm;

	/*find string length without null char*/
	for (l = 0; s[]; != '\0'; ++l)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < l / 2; i++)
	{
		pm = s[i];
		s[i] = s[l - 1 - i]; /*-1 because the array starts from 0*/
		s[l 1 - i] = pm;
	}
}
