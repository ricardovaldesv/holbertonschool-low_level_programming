#include "main.h"

/**
 * times_table - This function print 9 times table, starting with 0.
 */

void times_table(void)

{
	int i, j, pr;

	for (i = 0; i <= 9; i++)

	{
		for (j = 0; j <= 9; j++)
		{
			pr = j * i;
			if (j == 0)
			{
				_putchar(pr + '0');
			}

			if (pr < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pr + '0');
			} else if (pr >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((pr / 10) + '0');
				_putchar((pr % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
