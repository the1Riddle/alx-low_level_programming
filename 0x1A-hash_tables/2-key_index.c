#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key
 * @key: The key to get the index
 * @size: the size of the array of the hash table
 *
 * Return: the index at which the key/
 * value pair should be stored in the array of the hash table
 *
 * Description: the function uses the hash_djb2 writen earlier
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
