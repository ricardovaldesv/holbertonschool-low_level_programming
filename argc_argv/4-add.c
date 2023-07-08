#include <stdio.h>
#include <stdlib.h>

/**
 * main - This funtion adds positive numbers
 *
 * @argc : argument
 * @argv : array of pointer to string
 * Return: 0
 */

int main(int argc, char *argv[])

{
	int i, j, suma = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		suma += atoi(argv[i]);
	}
	printf("%d\n", suma);
	return (0);
}
