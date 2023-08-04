#include "lists.h"

/**
 * crea_node - creates new node
 * @n: data of node
 * @prev: link to prev node
 * @next: link to next node
 * Return: pointer to new node
 */

dlistint_t *crea_node(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *newN;

	newN = malloc(sizeof(dlistint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->prev = prev;
	newN->next = next;
	return (newN);
}


/**
 * insert_dnodeint_at_index - func that inserts a new node at a given position
 * @h: pointer to the header of the nodes
 * @idx: the index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr = *h, *temp = NULL;
	unsigned int count = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
	{
		if (!*h)
			*h = crea_node(n, NULL, NULL);
		else
		{
			(*h)->prev = crea_node(n, NULL, *h);
			*h = (*h)->prev;
		}
		return (*h);
	}
	for (curr = *h; curr && (count < idx); curr = curr->next, count++)
	{
		temp = curr;
	}
	if ((count == idx) && (curr == NULL))
	{
		temp->next = crea_node(n, temp, NULL);
		return (temp->next);
	}
	if ((count < idx) && (curr == NULL))
		return (NULL);
	if (temp != NULL)
	{
		temp->next = crea_node(n, temp, curr);
		curr->prev = temp->next;
		return (temp->next);
	}
	return (NULL);
}
