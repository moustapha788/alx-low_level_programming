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
	fibonacci103();
	return (0);
}

/**
 * fibonacci102 -  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return:   void
 */
void fibonacci103(void)
{
	unsigned long i = 0, t1 = 1, t2 = 2, next=t2,sum=0;

	
	while (next < 4000000)
	{

		next = t1 + t2;
		if(next % 2 == 0)
		{
			sum += next;
		}
		t1 = t2;
		t2 = next;
		i++;
	}

	printf("%lu\n",sum);
}
