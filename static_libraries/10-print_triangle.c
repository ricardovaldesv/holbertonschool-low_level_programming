#include "main.h"

/**
 * print_triangle - function to print a  triangle
 *
 * @size : is size of the triangle
 */
void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = size ; y >= 1; y--)
			{
				if (x < y)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
