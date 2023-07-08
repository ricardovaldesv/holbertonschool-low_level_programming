#include <stdio.h>
#include <stdlib.h>

/**
 * main - This funtion print the number of arguments.
 *
 * @argc : argument
 * @argv : array of pointer to string
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i, k, num, suma = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i][0] < '0' || argv[i][0] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}

	for (k = 1; k < argc; k++)
	{
		num = atoi(argv[k]);
				if (num >= 0)
				{
				suma += num;
				}
	}
	printf("%d\n", suma);
	return (0);
}
