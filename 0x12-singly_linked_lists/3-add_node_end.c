#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list, *elist = *head;
	int i, i2;
	if (head == NULL || str == NULL)
		return (NULL);
	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	list->str = strdup(str);
	list->len = i;
	list->next = NULL;
	if (*head == NULL)
		*head = list;
	else
	{
		for (i2 = 0; elist->next != NULL; i2++)
			elist = elist->next;
		elist->next = list;
	}
	return (list);
}