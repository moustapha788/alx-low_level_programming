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
	/* z = 97 */
	c = 122;
	while (c >= 97 /* a = 122 */)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
