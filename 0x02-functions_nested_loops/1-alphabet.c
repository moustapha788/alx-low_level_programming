#include "main.h"

/* more headers goes there */

/**
 * print_alphabet - Entry point
 * 	prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: no return (Success)
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');/*new line*/
}
