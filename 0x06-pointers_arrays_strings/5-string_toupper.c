#include "main.h"
#include "islower.c"


/* more headers goes there */

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 *@s: a pointer to a char
 * Return: a pointer to char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		if (_islower(s[i]))
		{
			s[i] -= 32;
		}
	}

	return (s);
}

