#include "main.h"
#include <stdlib.h>

/**
 * *create_array - This funtion create a array of chars, and initializes with
 * a specific char.
 *
 * @size : is a long of array
 * @c : is initializes char
 *
 * Return: Pointer to Array
 */

char *create_array(unsigned int size, char c)

{
	char *ar;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);

	if (ar == NULL)
		return (0);

	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	ar[i] = '\0';

	return (ar);

}
