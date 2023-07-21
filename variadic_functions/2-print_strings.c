#include "variadic_functions.h"


/**
 * print_strings - This function print strings
 *
 * @separator : is the string to be printed between numbers
 * @n : number of arguments
 * Return: nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)

{
	unsigned int i, x;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(num, unsigned int);
		if (x == NULL)
		{
			printf("(nil)");
		}
		printf("%s", x);
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
