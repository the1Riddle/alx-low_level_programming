#include "lists.h"
/**
* _strlen - returns the length of a string
* @s : s is a character
*
* Return: value of str
*/
int _strlen(const char *s)
{
	int z = 0;

	while (s[z] != '\0')
	{
		z++;
	}
	return (z);
}


/**
* add_node - the entry point
* @head: head of a list_t list
* @str: value to insert into element
*
* Description: th efunc add a new node at beginning of a list_t list
* Return: the number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}

	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}
