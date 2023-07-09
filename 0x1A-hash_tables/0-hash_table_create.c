#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the length of the array
 * Return: hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
	{
		// handle memory allocation error
		return (NULL);
	}

	ht->array = malloc(sizeof(hash_node_t) * size);
	if (ht->array == NULL)
	{
		// handle memory allocation error
		free(ht);
		return (NULL);
	}

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
