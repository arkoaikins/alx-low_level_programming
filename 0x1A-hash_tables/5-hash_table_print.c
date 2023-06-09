#include "hash_tables.h"
/**
 * hash_table_print - prints  hash table.
 * @ht: is the hash table
 * Return: nothing,void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == 1)
				printf(", ");

			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
			flag = 1;
		}
	}
	printf("}\n");
}
