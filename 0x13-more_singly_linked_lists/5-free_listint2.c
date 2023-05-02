#include "lists.h"
/**
 * free_listint2 - frees list
 * @head: pointer to listint_t
 *
 * Description: the unction sets the head to NULL
 * and free's listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *frii;

	while (*head)
	{
		frii = (*head)->next;
		free(*head);
		*head = frii;
	}
	*head = NULL;
}
