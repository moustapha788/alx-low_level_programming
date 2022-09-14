#include "main.h"


/* more headers goes there */

/**
 * jack_bauer - prints every minute of the day, starting from 00:00 to 23:59.
 *
 * Return:   void
 */
void jack_bauer(void)
{
	int hour = 0, min;

	while (hour < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(hour / 10 + 48);
			_putchar(hour % 10 + 48);
			_putchar(':');
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');

			min++;
		}
		hour++;
	}
}
