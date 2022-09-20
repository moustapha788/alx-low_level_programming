#include "main.h"
#include <stdio.h>

/* more headers goes there */

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 *
 *@a: a pointer to an integer
 *@n : an integer
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		if (count < (n - 1))
			printf(", ");
		count++;
	}
	printf("\n");
}
