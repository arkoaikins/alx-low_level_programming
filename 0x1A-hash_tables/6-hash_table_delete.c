#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: is the hash table
 *
 * Return: nothing,a void function
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *index;
	hash_table_t *head = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				index = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = index;
			}
		}
	}
	free(head->array);
	free(head);

}
