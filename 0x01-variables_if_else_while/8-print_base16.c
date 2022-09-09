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

	c1 = 48;
	c2 = 97;
	/* a program that prints the alphabet in lowercase, followed by a new line. */
	while (c1 <= 57)
	{
		putchar(c1);
		c1++;
	}
	while (c2 <= 102)
	{
		putchar(c2);
		c2++;
	}
	putchar('\n');
	return (0);
}
