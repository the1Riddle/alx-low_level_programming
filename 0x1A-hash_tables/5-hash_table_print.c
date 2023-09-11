#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: A pointer to the hash table.
 *
 * Description: If ht is NULL then nothing is printed
 * the key/value shoud be printed in the order that
 * they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;
	unsigned char comma = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma = 1;
		}
	}
	printf("}\n");
}
