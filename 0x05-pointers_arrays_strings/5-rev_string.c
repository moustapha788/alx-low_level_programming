#include "main.h"
#include "2-strlen.c"


/* more headers goes there */

/**
 * rev_string - reverses a string.
 *
 *@s: a pointer to a string
 * Return: void
 */
void rev_string(char *s)
{

	int len = _strlen(s), pos = 0;
	char c;

	while (pos < len / 2)
	{
		c = s[pos];
		s[pos] = s[len - (pos + 1)];
		s[len - (pos + 1)] = c;
		pos++;
	}
}
