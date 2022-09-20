#include "main.h"
#include "_putchar.c"
#include "2-strlen.c"


/* more headers goes there */

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 *@dest: destination
 *@src : source
 *
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, len = _strlen(src);

	while (count < len)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
