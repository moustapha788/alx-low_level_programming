#include "main.h"


/* more headers goes there */

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return:   void
 */
void times_table(void)
{
	int a = 0, b, prod;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			prod = a * b;

			if (prod <= 9)
			{
				_putchar(prod % 10 + '0');

			}
			if (prod > 9)
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			b++;
		}

		_putchar('\n');
		a++;
	}
}
