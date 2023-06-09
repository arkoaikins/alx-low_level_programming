#include "hash_tables.h"

/**
 * hash_table_set -  adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to
 * @key: is the key
 * @value:  the value with the key
 *
 * Return: return 1 on sucess , 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_n;
	unsigned long int index, i;
	char *new_value;

	if (ht == NULL || *key  == '\0' || key == NULL ||  value == NULL)
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}

	hash_n = malloc(sizeof(hash_node_t));
	if (hash_n == NULL)
	{
		free(new_value);
		return (0);
	}
	hash_n->key = strdup(key);
	if (hash_n->key == NULL)
	{
		free(hash_n);
		return (0);
	}
	hash_n->value = new_value;
	hash_n->next = ht->array[index];
	ht->array[index] = hash_n;
	return (1);
}
