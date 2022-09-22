#include "main.h"
#include "islower.c"
#include "_separator.c"


/* more headers goes there */

/**
 * cap_string - capitalizes all words of a string.
 *
 *@s: a pointer to a char
 * Return: a pointer to a char
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '\t')
		{
			s[i] = ' ';
		}
		if (separator(s[i]) && !separator(s[i + 1]))
		{
			if (_islower(s[i + 1]))
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}

