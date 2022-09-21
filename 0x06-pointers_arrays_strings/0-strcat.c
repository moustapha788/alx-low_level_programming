#include "main.h"
#include "strlen.c"


/* more headers goes there */

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 *@dest : a pointer to char
 *@src : a pointer to char
 * Return: a pointer to char
 */
char *_strcat(char *dest, char *src)
{
	int lenSrc = _strlen(src), lenDest = _strlen(dest), i = 0;

	while (i < lenSrc)
	{
		dest[lenDest + i] = src[i];
		i++;
	}
	return (dest);
}
