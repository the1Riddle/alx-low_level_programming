#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: The size of the array.
 *
 * Return: a pointer to the newly created hash table or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hT;
	unsigned long int i;

	hT = malloc(sizeof(hash_table_t));
	if (hT == NULL)
		return (NULL);

	hT->size = size;
	hT->array = malloc(sizeof(hash_node_t *) * size);
	if (hT->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hT->array[i] = NULL;

	return (hT);
}
