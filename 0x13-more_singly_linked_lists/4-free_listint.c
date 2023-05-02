#include "lists.h"
/**
 * free_listint - frees listint_t
 * @head: pointer to listint_t
 *
 *
 */
void free_listint(listint_t *head)
{
	listint_t *frii;

	while (head)
	{
		frii = head->next;
		free(head);
		head = frii;
	}
}
