#include "main.h"


/* more headers goes there */

/**
 * _isalpha - checks for alphabetic character.
 *
 *@c	:the caracter to test if it's alphabetic character or not
 * Return:	1 if c is a letter, lowercase or uppercase , 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
