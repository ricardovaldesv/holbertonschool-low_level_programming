#include "main.h"

/**
 * _isalpha - This program check  for alphabetic character
 * @c : Character to be check
 *
 * Return:  1 if characer is lowercase 0 otherwise
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
