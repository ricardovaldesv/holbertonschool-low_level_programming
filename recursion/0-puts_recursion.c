#include "main.h"

/**
 * _puts_recursion - This funtion print a string
 * @s : pointer to the string
 *
 */

void _puts_recursion(char *s)

{
	if ((*s) != '\0')
		{
		_putchar(*s);
		s = s + 1;
		_puts_recursion(s);
		}
}
