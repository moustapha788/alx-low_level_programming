#include "main.h"
#include "6-abs.c"


/* more headers goes there */

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n : number
 * Return:   last digit  of the number @n
 */
int print_last_digit(int n)
{
	int ld;

	ld = _abs(n) % 10;
	_putchar(ld + '0');

	return (ld);
}
