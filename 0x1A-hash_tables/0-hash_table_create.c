#include "hash_tables.h"

/**
 * hash_table_create - creates a new hash table
 * @size: hash table size (array's size)
 *
 * Return: pointer to hash table (Success) | NULL (Failure)
 */

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hasht;
    unsigned long int i = 0;

    hasht = malloc(sizeof(hash_table_t));
    if (!hasht)
        return (NULL);

    hasht->size = size;
    hasht->array = malloc(size * sizeof(hash_node_t *));
    
    if (hasht->array == NULL)
    {
        free(hasht);
        return (NULL);
    }
    
    while (i < size)
    {
        hasht->array[i] = NULL;
        i++;
    }
    return (hasht);
}
