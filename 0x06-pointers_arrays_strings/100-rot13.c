#include "main.h"
#include "islower.c"
#include "_separator.c"

/**
 * rot13 -  encodes a string using rot13.
 *
 *@s: a pointer to a char
 * Return: a pointer to a char
 */
char *rot13(char *s)
{
	int i, j;
	char starters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char substitutes[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (starters[j] == s[i])
			{
				s[i] = substitutes[j];
			}
		}
	}

	return (s);
}

