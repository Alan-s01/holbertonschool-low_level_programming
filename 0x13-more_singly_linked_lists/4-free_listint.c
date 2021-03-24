#include "lists.h"

/**
 * free_listint - frees a list
 * @head: list
 */

void free_listint(listint_t *head)
{
	listint_t *list, *n;

	list = head;
	while (list != NULL)
	{
		n = list->next;
		free(list);
		list = n;
	}
}
