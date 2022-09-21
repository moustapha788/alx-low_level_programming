#include "main.h"
#include "strlen.c"


/* more headers goes there */

/**
 * _strcmp - compares two strings.
 *
 *@s1 : a pointer to char
 *@s2: a pointer to char
 * Return: a pointer to char
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	diff = s1[i] - s2[i];

	return (diff);
}
