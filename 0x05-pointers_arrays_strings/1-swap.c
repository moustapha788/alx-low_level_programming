#include "main.h"


/* more headers goes there */

/**
 * swap_int - swaps the values of two integers.
 * followed by a new line.
 *
 *@a : a pointer to an integer
 *@b : a pointer to an integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
