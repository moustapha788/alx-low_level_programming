#include "main.h"
#include <stdio.h>

/* more headers goes there */

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @n : number
 * Return:   last digit  of the number @n
 */
int print_last_digit(int n)
{
	int digit, ld;

	digit = (n < 0) ? (n + 10) * -1 : n);
	ld = digit % 10;

	_putchar(ld + '0');

	return (ld);
}
