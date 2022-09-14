#include "main.h"
#include <stdio.h>


/* more headers goes there */

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a N.L.
 *@n: number
 *
 * Return:   void
 */
void print_to_98(int n)
{
	int step, pause;

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		step = ((n <= 98) ? 1 : -1);
		pause = ((n <= 98) ? 99 : 97);

		while (n != pause)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n += step;
		}
		printf("\n");
	}
}

