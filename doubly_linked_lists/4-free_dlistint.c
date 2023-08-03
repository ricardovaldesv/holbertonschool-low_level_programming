#include "lists.h"

/**
 * free_dlistint -  Function that frees a dlistint_t list.
 * @head: pointer to head
 */

void free_dlistint(dlistint_t *head)

{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

