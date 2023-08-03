#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * of a dlistint_t linked list.i
 * @head : pointer to list
 * Return: sum of all data (n)
 */

int sum_dlistint(dlistint_t *head)

{
	int sum = 0;

	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
