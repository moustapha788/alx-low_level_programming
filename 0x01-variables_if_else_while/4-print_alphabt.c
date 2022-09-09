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
	char c;
	/* a = 97 , A = 65 */
	c = 97;
	while (c <= 122 /* z = 122 */)
	{
		if (c != 'e' && c != 'q' /* e = 110 , q = 113 */)
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
