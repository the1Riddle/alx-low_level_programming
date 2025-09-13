#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table
 * @ht: A pointer to a hash table
 *
 *
 */
void hash_table_delete(hash_table_t *ht)
{
    unsigned long int i;
    if (ht == NULL) return;
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];
        while (node)
        {
            hash_node_t *tmp = node;
            node = node->next;
            free(tmp->key);
            free(tmp->value);
            free(tmp);
        }
    }
    free(ht->array);
    free(ht);
}
