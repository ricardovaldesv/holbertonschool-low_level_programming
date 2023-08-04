#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h : pointer to list
 * @idx : position of node
 * @n : data
 * Return: pointer at node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *temp2;

	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	newNode->n = n;
	newNode->next = NULL;
	while (--idx)
		temp = temp->next;
	temp2 = temp->next;

	newNode->next = temp->next;
	newNode->prev = temp;
	temp->next = newNode;
	temp2->prev = newNode;
	return (*h);
}
