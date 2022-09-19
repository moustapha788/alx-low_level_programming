#include "main.h"
#include "2-strlen.c"


/* more headers goes there */

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 *
 *@s: a pointer to a string
 * Return: void
 */
void print_rev(char *s)
{
	int len = _strlen(s);

	while (len != 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
