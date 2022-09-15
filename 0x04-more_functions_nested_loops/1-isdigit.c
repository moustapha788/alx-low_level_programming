#include "main.h"


/* more headers goes there */

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 *@c	:the caracter to test if it's digit or not
 * Return:	1 if c is digit , 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
