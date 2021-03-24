#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end
 * @head: list
 * @n: num
 * Return: node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *h;

	h = *head;
	list = malloc(sizeof(listint_t));
	if (list == NULL)
		return (NULL);

	list->n = n;
	list->next = NULL;
	if (*head == NULL)
	{
		*head = list;
		return (list);
	}
	while (h->next)
	{
		h = h->next;
	}
	h->next = list;
	return (list);
}
