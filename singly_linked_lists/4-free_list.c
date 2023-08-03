#include "lists.h"


/**
 * free_list -  Function that frees a list_t list.
 * @head: pointer to head
 */

void free_list(list_t *head)

{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
