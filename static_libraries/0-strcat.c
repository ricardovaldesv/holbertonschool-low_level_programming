#include "main.h"

/**
 * _strcat - This funtion concatenates two string @dest and @src
 *
 * @dest : is a string number 1
 * @src : is a string number 2
 *
 * Return: A pointer to the destination string @dest.
 */

char *_strcat(char *dest, char *src)

{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}


	j = 0;

	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';

	return (dest);

}
