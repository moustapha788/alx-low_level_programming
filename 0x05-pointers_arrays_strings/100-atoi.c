#include "main.h"
#include "2-strlen.c"


/* more headers goes there */

/**
 * _atoi - convert a string to an integer.
 *
 *@s: a pointer to char
 *
 * Return: integer
 */
int _atoi(char *s)
{
	unsigned int number = 0, count = 0, len = _strlen(s);
	int sign = 1;

	if (len != 0)
	{
		while (count < len)
		{
			if (_isdigit(s[count]))
			{
				number = (s[count] - 48) + number * 10;
				if (s[count + 1] == ' ')
					break;
			}
			else if (s[count] == '-')
			{
				sign *= -1;
			}

			count++;
		}
	}

	return (number * sign);
}

/**
 * _isdigit - check if a char is digit or no
 *
 *@c: a char
 *
 * Return: integer
 */
int _isdigit(unsigned int c)
{
	return (c >= 48 && c <= 57);
}
