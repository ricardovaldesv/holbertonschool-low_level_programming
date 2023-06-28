#include "main.h"
#include <stdio.h>

/**
 * print_array - This funtion print an array of integer.
 *
 * @a : is a name of array
 * @n : name of pointer
 */

void print_array(int *a, int n)


{
	int i;

	i = 0;
	while (i <= (n - 1))
	{
		if (i < (n - 1))
			printf("%d, ", a[i]);
		else if (i == (n - 1))
			printf("%d", a[i]);
		i++;
	}
	_putchar('\n');
}
