#include "search_algos.h"

/**
  *linear_search - unction that searches for a value in an array of integers
  *using the Linear search algorithm
  *@array: is a pointer to the first element of the array to search in
  *@size: size of array
  *@value: is the value to search for
  *Return: If value is not present in array or if array is NULL,  return -1
  */

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}
	return (-1);
}
