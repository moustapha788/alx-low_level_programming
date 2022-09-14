#include "main.h"


/* more headers goes there */

/**
 * _abs - computes the absolute value of an integer
 *
 * @n : number
 * Return: a positive  number
 */
int _abs(int n)
{
	int m = n;

	if (n < 0)
	{
		m = -1 * n;
	}
	if (n == 0)
	{
		m = 0;
	}
	return (m);
}
