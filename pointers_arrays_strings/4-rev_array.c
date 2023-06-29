#include "main.h"

/**
 * reverse_array - This funtion reverse the content or an array of integer.
 *
 * @a : pointer to array to be reverse
 * @n : number of elements in the array
 */

void reverse_array(int *a, int n)

{
	int i, j, mem;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		mem = a[i];
		a[i] = a[j];
		a[j] = mem;
		j--;
	}
}
