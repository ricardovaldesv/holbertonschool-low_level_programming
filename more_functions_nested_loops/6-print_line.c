#include "main.h"

/**
 * print_line - This function print a straight line
 * for n times
 * @n : number of times for print a straight line
 *
 */
void print_line(int n)


{
	int x;

		for (x = 0; x < n; x++)
		{
			if (n > 0)
			_putchar('_');
		}
	_putchar('\n');
}
