#include "search_algos.h"

/**
  *selection_sort - function that sorts an array of integers in
  *ascending order
  *@array: array to sort
  *@size: size of array
  *Return: void
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
