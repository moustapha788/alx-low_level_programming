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

	if (_islower(s[0]))
	{
		s[0] -= 32;
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (separator(s[i]))
		{
			if (_islower(s[i + 1]))
			{
				s[i + 1] -= 32;
			}
		}
	}

	return (s);
}

