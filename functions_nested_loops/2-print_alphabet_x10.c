#include "main.h"

/**
 * print_alphabet - This program print the alphabet in lowercase 10 times
 */

void print_alphabet_x10(void)
{
	char abc;
	int i;

	i = 0;

	while (i < 10)
	{
		abc = 'a';
		while (abc <= 'z')
		{
			_putchar(abc);
			abc++;
		}
		_putchar('\n');
		i++;
	}
}
