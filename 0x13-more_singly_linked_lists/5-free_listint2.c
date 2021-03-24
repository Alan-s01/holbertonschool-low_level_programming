#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
	head = NULL;
}
