#include "main.h"

/**
 * jack_bauer - This function print every minute of the day from 00:00 to 23:59
 * Print: every minute of the day from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int h, m;

	h = 0;
	while (h <= 23)
	{
		m = 0;
		while (m <= 59)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;

		}
	h++;
	}
}
