#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes the node at index
 * of a dlistint_t linked list. 
 *
 * @head: pointer at head of the list
 * @index: index of the node at delete
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    struct dlistint_s *curNode;
    struct dlistint_s *NodeToDel;
    struct dlistint_s *ennode;
    unsigned int i;
    
    size_t nodes = 0;
    nodes = dlistint_len(*head);
    
    ennode = get_dnodeint_at_index(*head,nodes);
 
    curNode = *head;
    
    for(i=0; i<index && curNode!=NULL; i++)
    {
        curNode = curNode->next;
    }
 
     if(index == 0)
     {
        struct dlistint_s * NodeToDel;
        if(*head == NULL)
        {
         return (-1);
        }
        else
        {
         NodeToDel = *head;
         *head = (*head)->next; 
         (*head)->prev = NULL; 
         free(NodeToDel);
        }
      }
    
    else if(curNode == ennode)
    {

     if(ennode == NULL)
     {
       return (-1);
     }
     else
     {
        NodeToDel = ennode;
        ennode = ennode->prev;
        ennode->next = NULL;
        free(NodeToDel);
     }

    }
    
    else if (curNode != NULL)
    {
        curNode->prev->next = curNode->next;
        curNode->next->prev = curNode->prev;
 
        free(curNode);
    }
    else
    {
        return (-1);
    }
return(1);
}

#include "lists.h"

/**
 * dlistint_len - function that retun number of nodes
 * @h: pointer to list
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)

{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

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


