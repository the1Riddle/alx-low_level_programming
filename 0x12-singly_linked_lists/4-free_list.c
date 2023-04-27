#include "lists.h"
/**
* free_list - the entry point
* @head: A pointer to the first node of the list to free
*
* Description: the func realease the memory allocated for a list:
* it frees the memory
*/
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
