#include "holberton.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: memory's bytes
 * @size: size
 * Return: none
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (size == 0 || nmemb == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		a[i] = '\0';

	return (a);
}
