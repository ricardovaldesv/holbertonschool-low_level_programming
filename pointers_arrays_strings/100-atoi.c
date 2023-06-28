#include "main.h"

/**
 * *_atoi - This function convert a string to an integer
 *
 * @s : is a string
 *
 * Return: the integer
 */

int _atoi(char *s)


{
	int i, cont, n, num, neg, ch;

	i = 0;
	cont = 0;
	n = 0;
	num = 0;
	neg = 0;
	ch = 0;

	while (s[i] != '\0')
		i++;

	while (cont < i && ch == 0)
	{
		if (s[cont] == '-')
			++neg;
		if (s[cont] >= '0' && s[cont] <= '9')
		{
			num = s[cont] - '0';
			if (neg % 2)
				num = -num;
			n = n * 10 + num;
			ch = 1;
			if (s[cont + 1] < '0' || s[cont + 1] > '9')
				break;
			ch = 0;
		}
		cont++;
	}
	if (ch == 0)
		return (0);
	return (n);
}
