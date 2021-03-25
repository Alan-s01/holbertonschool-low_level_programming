#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at indesx given
 * @head: list
 * @index: index
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *c;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	c = *head;
	if (index == 0)
	{
		*head = c->next;
		free(c);
		return (1);
	}

	for (i = 0; i < index && c->next; i++)
	{
		t = c;
		c = c->next;
	}

	if (i < index)
		return (-1);

	t->next = c->next;
	free(c);
	return (1);
}

