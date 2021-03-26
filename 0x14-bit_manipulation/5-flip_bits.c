#include "holberton.h"

/**
 * flip_bits - returns the numbers of bits
 * @n: num
 * @m: max
 * Return: max
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, c = 0;

	i = n ^ m;
	while (i > 0)
	{
		if ((i & 1) == 1)
			c++;
		i >>= 1;
	}
	return (c);
}
