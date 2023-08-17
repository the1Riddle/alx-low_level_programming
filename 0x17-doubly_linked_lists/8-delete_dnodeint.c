#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes the node
 * at index of a dlistint_t linked list.
 *
 * @head: the head nd
 * @index: the index to delet at
 *
 * Return: 1 if it succeeded, or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *firstH = *head;
	dlistint_t *scndH;
	unsigned int x = 0;

	if (firstH)
		while (firstH->prev)
			firstH = firstH->prev;
	while (firstH)
	{
		if (x == index)
		{
			if (x == 0)
			{
				*head = firstH->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				scndH->next = firstH->next;
				if (firstH->next)
					firstH->next->prev = scndH;
			}
			free(firstH);
			return (1);
		}
		scndH = firstH;
		firstH = firstH->next;
		x++;
	}
	return (-1);
}
