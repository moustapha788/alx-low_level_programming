#include "main.h"


/* more headers goes there */

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 *@str: a pointer to a string
 * Return: void
 */
void _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
