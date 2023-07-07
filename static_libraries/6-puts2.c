#include "main.h"

/**
 * puts2 - This funtion print every other character of a string.
 *
 * @str : is a string
 */

void puts2(char *str)

{

	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
