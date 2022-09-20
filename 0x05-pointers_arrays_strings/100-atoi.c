#include "main.h"
#include "2-strlen.c"
#include <stdio.h>



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
int _atoi(char *s)
{
	int number = 0;
	int count = 0, pos =0, len = _strlen(s);
	if (len != 0)
	{
		while (count < len)
		{	
			if (_isdigit(s[count]) == 1)
			{				
				pos++;
			}

			count++;
		}	
	}

	
	return (number);
}

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
