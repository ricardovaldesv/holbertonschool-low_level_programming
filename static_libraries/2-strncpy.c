#include "main.h"

/**
 * _strncpy - This funtion copy a string @src and @dest, use n bytes
 * from src
 *
 * @dest : is a string number 1
 * @src : is a string number 2
 * @n : is bytes to use from @src
 *
 * Return: a pointer to the resultanting string  @dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
