#include "lists.h"
/**
 * add_nodeint - the entry point
 * @head: a double pointer to listint_t
 * @n: a const to put the new node
 *
 * Description: a function that adds a new node,
 * at the beginning of a listint_t list
 * Return: the address of the new element, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
