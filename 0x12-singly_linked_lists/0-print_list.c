#include "lists.h"
/**
* print_list - the entry point
* @h: name of the list
*
* Description: the func check the code for Holberton School students
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
