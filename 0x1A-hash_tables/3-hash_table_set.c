#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to insert element in
 * @key: the key of the element
 * @value: The value associated with key.
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp = NULL;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	{
		return (0);
	}

	temp = malloc(sizeof(hash_node_t));
	if (temp == NULL)
	{
		/*handle memory allocation failure*/
		return (0);
	}

	temp->key = strdup(key);
	if (temp->key == NULL)
	{
		free(temp);
		return (0);
	}
	temp->value = strdup(value);
	if (temp->value == NULL)
	{
		free(temp->key);
		free(temp);
		return (0);
	}
	temp->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	temp->next = ht->array[index];
	ht->array[index] = temp;
	return (1);
}
