#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 *
 * @a: pointer a square matrix
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)

{
	int i;

	int sum1, sum2;

	 sum1 = 0;
	 sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = a[(size * i) + i] + sum1;
		sum2 = a[(size * (i + 1)) - (i + 1)] + sum2;
	}

	printf("%d, %d\n", sum1, sum2);
}
