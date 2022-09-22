#include "main.h"
#include "islower.c"
#include "_separator.c"

/**
 * leet - encodes a string into 1337.
 *Letters a and A are replaced by 4.
 *Letters e and E are replaced by 3
 *Letters o and O are replaced by 0
 *Letters t and T are replaced by 7
 *Letters l and L are replaced by 1
 *
 *@s: a pointer to a char
 * Return: a pointer to a char
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL", numbers[] = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (letters[j] == s[i])
			{
				s[i] = numbers[j];
			}
		}
	}

	return (s);
}

