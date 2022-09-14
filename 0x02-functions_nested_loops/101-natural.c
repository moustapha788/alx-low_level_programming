#include "main.h"
#include <stdio.h>
/* more headers goes there */

/**
 * naturalNumbers1024 - computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 *@n: number
 * Return:   void
 */
void naturalNumbers1024(void)
{

	int sum = 0, i = 1;
	
	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}

		i++;
	}
	printf("%d\n", sum);
}
