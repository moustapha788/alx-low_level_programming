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
	int m = 48, n, k;

	while (m <= 57)
	{
		n = m;
		while (n <= 57)
		{
			k = n;
			while (k <= 57)
			{
				if (!(m == n || n == k || k == m))
				{
					putchar(m);
					putchar(n);
					putchar(k);
					if (m == 55 && n == 56 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}

				k++;
			}
			n++;
		}
		m++;
	}

	putchar('\n');

	return (0);
}
