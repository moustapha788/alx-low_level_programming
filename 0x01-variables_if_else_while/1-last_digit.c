#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigitofNumber;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigitofNumber = n % 10;
	printf("Last digit of %d is %d ", n, lastDigitofNumber);
	if (lastDigitofNumber > 5)
	{
		printf("and is greater than 5\n");
	}
	if (lastDigitofNumber == 0)
	{
		printf("and is 0\n");
	}
	if (lastDigitofNumber < 6 && lastDigitofNumber != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
