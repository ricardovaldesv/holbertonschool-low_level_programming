#include "main.h"

/**
 * cap_string - This funtion capitalizes all words of a string.
 *
 * @str : is a string to be change.
 *
 * Return: The string change.
 */

char *cap_string(char *str)


{
	int i, j;

	char st[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i]-32;

		for (j = 0; j < 13; j++)
		{
			if (str[i] == st[j])
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
