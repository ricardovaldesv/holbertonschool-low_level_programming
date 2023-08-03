#include "lists.h"

/**
 * dlistint_len - function that retun number of nodes
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
