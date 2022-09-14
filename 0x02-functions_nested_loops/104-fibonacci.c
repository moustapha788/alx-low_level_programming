#include "main.h"
#include <stdio.h>
/* more headers goes there */


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci104();
	return (0);
}

/**
 * fibonacci104 - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 *
 * Return:   void
 */
void fibonacci104(void)
{
	unsigned long i = 0, t1 = 1, t2 = 2, next = t2, count = 2;

	printf("%lu, %lu, ", t1, t2);
	while (count < 98)
	{
		++count;
		next = t1 + t2;
		printf("%lu", next);
		if (count < 98)
		{
			printf(", ");
		}

		t1 = t2;
		t2 = next;

		i++;
	}

	printf("\n");
}
