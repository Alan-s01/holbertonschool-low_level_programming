#include "holberton.h"

/**
 * binary_to_uint - converts a binary to int
 * @b: binary
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, len, t, p;
	int c = 2;

	t = 0;
	p = 1;
	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	if (len == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = len - 1; j > 0; j--)
			p *= c;
		t += (p * (b[i] - 48));
		len--;
		p = 1;
	}
	return (t);
}
