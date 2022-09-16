#include "main.h"
#include <stdio.h>




/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fizzBuzzTest(100);
	return (0);
}


/* more headers goes there */

/**
 * fizzBuzzTest - prints the numbers from 1 to 100,
 * followed by a new line, according also to the fizz buzz test.
 *
 *@n : number
 *
 * Return: void
 */
void fizzBuzzTest(int n)
{
	int i;

	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			if ((i % 3 != 0) && (i % 5 != 0))
			{
				printf("%d", i);
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				printf("Buzz");
			}
			printf(" ");
		}
		printf("\n");
	}
}
