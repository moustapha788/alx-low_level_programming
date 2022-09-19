#include "main.h"
#include "2-strlen.c"


/* more headers goes there */

/**
 * puts_half - prints half of a string, followed by a new line.
 *
 *@str: a pointer to a string
 * Return: void
 */
void puts_half(char *str)
{

	int len = _strlen(str), pos = len / 2;

	while (pos <= len)
	{
		_putchar(str[pos]);
		pos++;
	}
	_putchar('\n');
}
