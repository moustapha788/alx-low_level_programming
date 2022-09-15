#include "main.h"


/* more headers goes there */

/**
 * print_line - draws a straight line in the terminal
 * followed by a new line.
 *@n : number
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
