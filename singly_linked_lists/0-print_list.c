#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] %s\n", "(nil)");
		}
		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		current = current->next;
		i++;
	}
	return (i);
}
