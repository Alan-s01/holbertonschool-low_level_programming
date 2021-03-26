#include "holberton.h"

/**
 * clear_bit - sets the value of a bit
 * @n: num
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 1;

	if (index > sizeof(n) * 8)
		return (-1);

	i <<= index;
	*n &= ~i;
	return (1);
}
