#include "main.h"

/**
 * *_strchr -This function  locates a character in a string.
 * @s: This is the  string
 * @c: This is the character to be locate.
 *
 * Return: 0
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);

	return (0);
}
