#include "lists.h"
/**
 * print_listint - prints all list
 * @h: list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t c;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
