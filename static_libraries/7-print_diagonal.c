#include "main.h"

/**
 * print_diagonal - This function print a diagonal line
 * @n : number of times for print a diagonal line
 *
 */
void print_diagonal(int n)


{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else if (j == i)
				{
					_putchar('\\');
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
