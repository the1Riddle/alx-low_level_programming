#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: The key of the added item to the hash table
 * @value: is the value associated with the key
 *
 * Return: 1 if it succeeded or 0 if otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_cpy;
	unsigned long int index, x;

	if (!ht || !key || *key == '\0' || !value)
		return (0);

	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = value_cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = value_cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
