#include "lists.h"

/**
 * list_len - returns the num of elements
 * @h: list
 * Return: lenght
 */

size_t list_len(const list_t *h)
{
	const list_t *list = *h;
	size_t c = 0;
	int i;

	for (1 = 0; list != NULL; i++)
	{
		c++;
		list = list->next;
	}
	return (c);
}
