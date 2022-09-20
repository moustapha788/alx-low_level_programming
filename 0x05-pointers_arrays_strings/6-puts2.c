#include "main.h"
#include "2-strlen.c"


/* more headers goes there */

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 *@str: a pointer to a string
 * Return: void
 */
void puts2(char *str)
{

	int len = _strlen(str), pos = 0;

	if (len != 0)
	{
		while (pos < len)
		{
			if (pos % 2 == 0)
			{
				_putchar(str[pos]);
			}
			pos++;
		}
	}
	_putchar('\n');
}
