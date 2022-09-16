#include "main.h"


/* more headers goes there */

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 *@size : number
 * Return: void
 */
void print_triangle(int size)
{
	int i, space, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (space = size - i; space > 0; space--)
			{
				_putchar(' ');
			}
			for (j = 1 ; j <= i ; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
