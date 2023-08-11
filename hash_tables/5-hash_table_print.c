#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 *
 * @ht: table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char n;

	if (ht == NULL)
		return;
	n= 0;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (n)
			{
				printf(", ");
			}
			printf("'%s': '%s'", p->key, p->value);
			p = p-> next;
			n = 1;
		}
	}
	printf("}\n");
}
