#include "main.h"

/**
 * print_square - This function print a square
 * @size : number of times for print a square
 *
 */
void print_square(int size)



{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
