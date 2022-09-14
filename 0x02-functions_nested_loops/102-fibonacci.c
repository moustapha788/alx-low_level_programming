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
	fibonacci102();
	return (0);
}

/**
 * fibonacci102 -  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return:   void
 */
void fibonacci102(void)
{
	int n = 50, i = 0, t1 = 1, t2 = 2, next;

	printf("%d, %d", t1, t2);
	while (i < (n - 2))
	{
		next = t1 + t2;
		printf(", %d", next);
		t1 = t2;
		t2 = next;
		i++;
	}

	printf("\n");
}
