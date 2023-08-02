#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list
 * @h: pointer to list
 * Return: the number of nodes or elements
 */


size_t list_len(const list_t *h)

{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
