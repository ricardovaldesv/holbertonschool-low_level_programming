#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - This funtion copya string to a newly space of memory.
 *
 * @str  : is a pointer of string to copy
 *
 * Return: Pointer @copy to copy of a string
 */

char *_strdup(char *str)

{
	char *copy;
	unsigned int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	if (str == NULL)
		return (NULL);

	copy = malloc(sizeof(char) * (i + 1));

	for (j = 0; j <= i; j++)
	copy[j] = str[j];


	return (copy);
}
