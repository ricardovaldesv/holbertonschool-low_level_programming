#include "main.h"

/**
 * print_sign - This function print the sign of a number
 * @n : Number to be check
 *
 * Return:  1 if characer is grater than zero 0, 0 if is zero,
 * -1 if less than zero
 * Printf : + if characer is grater than zero 0, 0 if is zero,
 * - if less than zero
 */

int print_sign(int n)
{

	if (n > '0')
	{
		return (1);
		_putchar ('+');
	}
	else if (n == '0')
	{
		return (0);
		_putchar ('0');
	}
	else
	{
		return (-1);
		_putchar ('-');
	}
}
