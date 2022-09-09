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
	char c1, c2;
	/* a = 97 , A = 65 */
	c1 = 97;
	c2 = 65;
	while (c1 <= 122 /* z = 122 */)
	{
		putchar(c1);
		c1++;
	}
	while (c2 <= 90 /* Z = 90 */)
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
