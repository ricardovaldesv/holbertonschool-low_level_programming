#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: is the hash table
 */


void hash_table_delete(hash_table_t *ht)
{
	if (!ht)
		return;

	unsigned long int i;
	hash_node_t *p, *next;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			next = p->next;
			free(p->key);
			free(p->value);
			free(p);
			p = next;
		}
	}

	free(ht->array);
	free(ht);
}
