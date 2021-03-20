#include "lists.h"

/**
 * add_node - adds a new node
 * @head: list
 * @str: string
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int i;

	if (head == NULL || str == NULL)
		return (NULL);

	list = malloc(sizeof(list_t));
	if (list == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	list->str = strdup(str);
	list->len = i;
	list->next = *head;
	*head = list;
	return (list);
}

