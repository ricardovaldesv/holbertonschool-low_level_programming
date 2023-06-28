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
	int i, j, k, m;

	i = 0;
	j = 0;
	k = 0;
	m = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	while (dest[j] != '\0')
	{
		j++;
	}

	for (k = i; k <= (i + j + 1); k++)
	{
		for (m = 0; m <= i; m++)
			dest[k] = src[m];
	}
	dest[k] = '\0';

	return (dest);
}
