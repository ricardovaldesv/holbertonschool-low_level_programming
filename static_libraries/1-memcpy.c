#include "main.h"

/**
 * *_memcpy - This funtion copy memory area.
 * @dest : pointer to be copy memory area
 * @src : pinter to be copy to dest
 * @n : the nuber of the bytes to be copied
 *
 * Return:pointer @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	 unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
