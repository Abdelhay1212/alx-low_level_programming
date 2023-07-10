#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table to insert element in
 * @key: the key of the element
 * @value: value
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *temp = NULL, *current = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || strlen(key) == 0)
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
    temp->value = strdup(value);
    temp->next = NULL;

    index = key_index((const unsigned char *)key, ht->size);
    if (ht->array[index] == NULL)
    {
        ht->array[index] = temp;
        return (1);
    }

    current = ht->array[index];
    temp->next = current;
    current = temp;
    return (1);
}
