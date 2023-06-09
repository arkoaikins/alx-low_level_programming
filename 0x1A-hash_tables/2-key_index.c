#include "hash_tables.h"

/**
 * key_index -  gives you the index of a key.
 * @key: the key
 * @size: size with arrays to hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	key_value = (hash_djb2(key) % size);
	return (key_value);
}
