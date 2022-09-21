#include "main.h"
#include "strlen.c"


/* more headers goes there */

/**
 * _strncat -  function is similar to the _strcat function, except that
 *  it will use at most n bytes from src; and
 *  src does not need to be null-terminated if it contains n or more bytes
 *
 *@dest : a pointer to char
 *@src : a pointer to char
 *@n : number
 * Return: a pointer to char
 */
char *_strncat(char *dest, char *src, int n)
{
	int lenSrc = _strlen(src), lenDest = _strlen(dest), i = 0;

	while (i < lenSrc && i < n)
	{
		dest[lenDest + i] = src[i];
		i++;
	}
	return (dest);
}
