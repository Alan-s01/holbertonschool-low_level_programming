#include "lists.h"

/**
 * add_nodeint - add a new node
 * @head: node
 * @n: num
 * Return: node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
		return (NULL);

	list->next = *head;
	list->n = n;
	*head = list;

	return (list);
}

