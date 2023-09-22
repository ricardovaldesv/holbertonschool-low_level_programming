#include "search_algos.h"

/**
  *binary_search - function that searches for a value in a sorted array
  *of integers using the Binary search algorithm
  *@array: is a pointer to the first element of the array to search in
  *@size: size of array
  *@value: is the value to search for
  *Return: If value is not present in array or if array is NULL,  return -1
  */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		middle = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
