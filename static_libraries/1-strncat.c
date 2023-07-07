#include "main.h"

/**
 * _strncat - This funtion concatenates two string @dest and @src, use n bytes
 * from src
 *
 * @dest : is a string number 1
 * @src : is a string number 2
 * @n : is bytes to use from @src
 *
 * Return: a pointer to the resultanting string  @dest
 */

char *_strncat(char *dest, char *src, int n)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}


	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	return (dest);

}
