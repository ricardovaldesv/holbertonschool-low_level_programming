#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)

{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%u\n", current->n);
		current = current->next;
		i++;
	}
	return (i);
}