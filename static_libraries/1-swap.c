#include "main.h"

/**
 * swap_int - This funtion swaps the values of two integers.
 *
 * @a : is a integer 1
 * @b : is a integer 2
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
