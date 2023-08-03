#include "lists.h"

/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head : pointer to list
 * @n: data
 * Return: the number of nodes
 */


dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	newNode->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = newNode;
	*head = newNode;
	return (*head);

}
