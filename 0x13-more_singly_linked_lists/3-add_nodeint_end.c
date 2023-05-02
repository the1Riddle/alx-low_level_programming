#include "lists.h"
/**
 * add_nodeint_end - the entry point
 * @head: a double pointer to listint_t
 * @n: a const that holds new node
 *
 * Return: NULL on failure or the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	while (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;

	return (new);
}
