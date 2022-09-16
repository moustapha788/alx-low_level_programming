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
	int i, j;

	if (size> 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
