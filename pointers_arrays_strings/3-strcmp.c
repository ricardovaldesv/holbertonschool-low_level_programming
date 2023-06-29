#include "main.h"

/**
 * _strcmp - This funtion compare two  string @s1 and @s2.
 *
 * @s1 : is a string number 1
 * @s2 : is a string number 2
 *
 * Return: 0 if s1 = s2, positive si s1 > s2, negative if s1 < s2
 */

int _strcmp(char *s1, char *s2)

{
	return (*s1 - *s2);

}
