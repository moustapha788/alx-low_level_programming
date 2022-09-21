#include "main.h"
#include "strlen.c"


/* more headers goes there */

/**
 * _strncpy -  function is similar to the _strcat function, except that
 *  it will use at most n bytes from src; and
 *  src does not need to be null-terminated if it contains n or more bytes
 *
 *@dest : a pointer to char
 *@src : a pointer to char
 *@n : number
 * Return: a pointer to char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int lenSrc = _strlen(src), i = 0;

	while (i < n && i < lenSrc)
	{
		dest[i] = src[i];
		i++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
