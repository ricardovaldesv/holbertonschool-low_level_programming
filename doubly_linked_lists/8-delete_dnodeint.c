#include "lists.h"

/**
 * delete_dnodeint_at_index - func that delet a new node at a given position
 * @head: pointer to the header of the nodes
 * @index: the index of the list where the new node should be added
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node_to_delete;

	if (!head || !*head)
		return (-1);
	node_to_delete = *head;

	if (index == 0)
	{
		*head = node_to_delete->next;
		if (node_to_delete->next)
			node_to_delete->next->prev = NULL;
		free(node_to_delete);
		return (1);
	}
	for (i = 0; node_to_delete && i < index; i++)
	{
		node_to_delete = node_to_delete->next;
	}
	if (!node_to_delete)
		return (-1);
	if (!node_to_delete->next)
	{
		node_to_delete->prev->next = NULL;
		free(node_to_delete);
		return (1);
	}
	node_to_delete->prev->next = node_to_delete->next;
	node_to_delete->next->prev = node_to_delete->prev;
	free(node_to_delete);
	return (1);
}
