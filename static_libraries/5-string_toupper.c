#include "main.h"

/**
 * string_toupper - This funtion changes all lowercase of a string
 *  to uppercase.
 *
 * @st : is a string to be change.
 *
 * Return: The string change.
 */

char *string_toupper(char *st)

{
	int i;


	for (i = 0; st[i] != '\0'; i++)
	{
		if (st[i] >= 'a' && st[i] <= 'z')
			st[i] = st[i] - 32;
	}
	return (st);
}
