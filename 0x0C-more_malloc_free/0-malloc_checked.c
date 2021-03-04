#include "holberton.h"

/**
 * malloc_checked - allocates memory by malloc
 * @b: bytes
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *) malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
