#include "lists.h"
/**
 * free_list - frees a list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *pos, *list;
	list = head;
	while (list != NULL)
	{
		pos = list->next;
		free(list->str);
		free(list);
		list = pos;
	}
}