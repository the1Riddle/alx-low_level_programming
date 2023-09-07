# 0x1A. C

This project is about Hash tables in C programming

## More Info

Data Structures
---------------

The following is the data structures used for this project:

	/**
	 * struct hash_node_s - Node of a hash table
	 *
	 * @key: The key, string
	 * The key is unique in the HashTable
	 * @value: The value corresponding to a key
	 * @next: A pointer to the next node of the List
	 */
	typedef struct hash_node_s
	{
	     char *key;
	     char *value;
	     struct hash_node_s *next;
	} hash_node_t;
	
	/**
	 * struct hash_table_s - Hash table data structure
	 *
	 * @size: The size of the array
	 * @array: An array of size @size
	 * Each cell of this array is a pointer to the first node of a linked list,
	 * because we want our HashTable to use a Chaining collision handling
	 */
	typedef struct hash_table_s
	{
	     unsigned long int size;
	     hash_node_t **array;
	} hash_table_t;


## Python Dictionaries

Python dictionaries are implemented using hash tables. This project able to better understand the power <br>
and simplicity of Python dictionaries. So much is actually happening when you type d = {'a': 1, 'b': 2},
but everything will look so simple for the user. <br>
Python doesn’t use the exact same implementation than the one that is worked on today though. <br>
If you are curious on how it works under the hood, here is a good blog post about how dictionaries <br>
are implemented in Python 2.7 (not mandatory).

 <b> Note: <b> that all dictionaries are not implemented using hash tables and there is a difference between <br>
a dictionary and a hash table. Read more here (not mandatory).
