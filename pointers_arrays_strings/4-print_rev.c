#include "main.h"

/**
 * print_rev - This funtion print a string, in reverse.
 *
 * @s : is a string
 */

void print_rev(char *s)

{

	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}

	_putchar('\n');
}
