#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a dlistint_t linked list
 * @head : pointer to list
 * @index: position of node
 * Return: pointer at node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)


{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
