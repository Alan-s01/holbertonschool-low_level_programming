#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: list
 * Return: node
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	h = *head;
	if (h == NULL)
		return (0);

	*head = h->next;
	n = h->n;
	free(h);
	return (n);
}
