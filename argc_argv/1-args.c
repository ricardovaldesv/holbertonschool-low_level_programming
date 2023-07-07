#include <stdio.h>


/**
 * main - This funtion print the number of arguments.
 *
 * @argc : argument
 * @argv : array of pointer to string
 * Return: 0
 */

int main(int argc, char *argv[])

{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
