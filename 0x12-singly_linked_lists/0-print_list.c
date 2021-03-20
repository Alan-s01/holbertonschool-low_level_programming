#include "lists.h"

/**
 * print_list - prints all elements
 * @h: list
 * Return: len
 */

size_t print_list(const list_t *h)
{
	const list_t list = *h;
	size_t c = 0;
	int i = 0;

	while (list != NULL)
	{
		if (list->s == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", list->len, list->s);

		list = list->next;
		c++;
		i++;
	}
	return (c);
}

