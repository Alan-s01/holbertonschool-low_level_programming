#include "lists.h"

/**
 * print_list - prints all elements
 * @h: list
 * Return: len
 */

size_t print_list(const list_t *h)
{
	const list_t *list = h;
	size_t c = 0;
	int i;

	for (i = 0; list != NULL; i++)
	{
		if (list->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%iu] %s\n", list->len, list->str);

		c++;
		list = list->next;
	}
	return (c);
}

