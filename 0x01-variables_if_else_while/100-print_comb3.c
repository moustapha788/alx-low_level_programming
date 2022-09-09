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
	int n = 48, m;


	while (n <= 57)
	{
		m = n;
		while (m <= 57)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				if (n == 56 && m == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			m++;
		}

		n++;
	}

	putchar('\n');

	return (0);
}
