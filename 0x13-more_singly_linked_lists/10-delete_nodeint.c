#include "lists.h"
/**
 * delete_nodeint_at_index - the entry point
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Description: a function that deletes the node,
 * at index of a listint_t linked list
 * Return: 1 on (Success), or -1 for failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int a = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while ((index > a) - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		a++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
