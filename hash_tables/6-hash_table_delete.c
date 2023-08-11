#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: is the hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *current, *next;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			current = p;
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			p = next;
		}
	}
	free(ht->array);
	free(ht);
}
