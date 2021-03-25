#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: list
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *n;

	if (*head == NULL || head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);

	rev = NULL;
	while (*head)
	{
		n = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = n;
	}

	*head = rev;
	return (*head);
}
