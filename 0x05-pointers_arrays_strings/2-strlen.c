#include "main.h"


/* more headers goes there */

/**
 * _strlen -  returns the length of a string.
 *
 *@s : a pointer to a string
 * Return: the lenght of the string @s (integer)
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
