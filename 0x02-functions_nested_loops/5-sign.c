#include "main.h"


/* more headers goes there */

/**
 * print_sign - prints the sign of a number.
 *
 *@n	:the number to test
 * Return:1 and prints + 1 if n >0 if n==0 and -1 if n <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
