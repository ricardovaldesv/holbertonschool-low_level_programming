#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list
 * @head : pointer to list
 * @n: data
 * Return: the number of nodes
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		dlistint_t *lastNode;

		lastNode = *head;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
		newNode->prev = lastNode;
	}
	return (*head);
}
