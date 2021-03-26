#include "holberton.h"

/**
 * set_bit - sets the value of a bit
 * @n: num
 * @index: index
 * Return: 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	i <<= index;
	*n |= i;
	return (1);
}
