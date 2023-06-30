#include "main.h"

/**
 * leet - This funtion encode a string.
 *
 * @str : is a string to be change.
 *
 * Return: The string change.
 */

char *leet(char *str)


{
	int i, j;

	char cod1[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char cod2[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char rep[] = {'4', '3', '0', '7', '1', '\0'};


	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == cod1[j] || str[i] == cod2[j])
			{
				str[i] = rep[j];
			}
		}
	}
	return (str);
}
