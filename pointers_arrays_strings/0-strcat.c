#include "main.h"

/**
 * _strcat - This funtion concatenates two string.
 *
 * @dest : is a string number 1
 * @src : is a string number 2
 *
 * Return : pointer to the resulting string dest
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
