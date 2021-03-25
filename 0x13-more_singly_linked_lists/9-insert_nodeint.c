#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: list
 * @idx: index
 * @n: num
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list, *t;
	unsigned int i;

	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);
	list->n = n;

	if (*head == NULL)
	{
		*head = list;
		list->next = NULL;
		return (list);
	}

	if (idx == 0)
	{
		list->next = *head;
		*head = list;
		return (list);
	}

	t = *head;
	for (i = 0; i < (idx - 1) && t->next; i++)
		t = t->next;

	if (i < idx - 1)
		return (NULL);
	list->next = t->next;
	t->next = list;
	return (list);
}
