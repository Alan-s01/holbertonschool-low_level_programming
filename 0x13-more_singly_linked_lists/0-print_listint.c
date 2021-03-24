#include "lists.h"
/**
 * print_listint - prints all list
 * @h: list
 * Return: nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;
	size_t c;
	if (h)
	{
		for (i = 0; h != NULL; i++)
		{
			printf("%d\n", h->n);
			c++;
			h = h->next;
		}
	}
	return (c);
}
