#include "main.h"

/**
 * rev_string - This funtion reverses a string.
 *
 * @s : is a string
 */

void rev_string(char *s)

{

	int i, j, k;
	char chx;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (k = 0; k < i / 2; k++)
	{
		chx = s[k];
		s[k] = s[j];
		s[j] = chx;
		j--;
	}
}
