#include "main.h"

/**
 * _abs - This function compute the absolute value of an integer
 *@n : The integer to be computed
 *
 * Return: The absolute value
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
