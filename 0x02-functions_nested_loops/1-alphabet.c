#include "main.h"

/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
    int c = 97;
	while (c <= 122 )
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');/*new line*/

	return ;
}
