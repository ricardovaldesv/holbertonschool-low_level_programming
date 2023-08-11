#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: table
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	/*Agrega el nodo a la tabla hash (manejando colisiones si es necesario*/
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	else if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		free(ht->array[index]->value);
		free(ht->array[index]->key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->key = strdup(key);
		return (1);
	}
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
		return (1);
	}
}
