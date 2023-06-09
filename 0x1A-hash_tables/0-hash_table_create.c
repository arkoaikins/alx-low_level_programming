#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: is the size of the array.
 *
 * Return: returns a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ha_t;
	unsigned long int i;

	ha_t = malloc(sizeof(hash_table_t));
	if (ha_t == NULL)
		return (NULL);
	ha_t->size = size;
	ha_t->array = malloc(size * sizeof(hash_node_t *));
	if (ha_t->array == NULL)
	{
		free(ha_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ha_t->array[i] = NULL;
	return (ha_t);
}
