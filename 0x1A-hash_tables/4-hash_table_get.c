#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @th: is the hash table you want to look into
 * @key: is the key you are looking for
 * Return : Returns the value associated with the element,
    or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
		return (NULL);

	return (ht->array[index]->value);
}
