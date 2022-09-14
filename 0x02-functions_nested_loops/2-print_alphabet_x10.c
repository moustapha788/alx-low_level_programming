#include "main.h"

/* more headers goes there */

/**
 * print_alphabet_x10 - Entry point
 *	prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: no return (Success)
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 10)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');/*new line*/

		count++;
	}

}
