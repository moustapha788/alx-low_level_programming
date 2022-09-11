#include <stdio.h>
#include <stdlib.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, m;


	while (n <= 99)
	{
		m = n;
		while (m <= 99)
		{
			if (m != n)
			{

				putchar(n / 10 + 48);
				putchar(n % 10 + 48);
				putchar(' ');
				putchar(m / 10 + 48);
				putchar(m % 10 + 48);

				if ((n * 100 + m) != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

			m++;

		}

		n++;

	}
	putchar('\n');
	return (0);
}

