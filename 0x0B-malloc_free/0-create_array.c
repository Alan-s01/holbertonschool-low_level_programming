#include "holberton.h"

/*
 * create_array - creates an array of chars
 * @size: size
 * @c: char
 * Return: NULL or array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	else if (ar == 0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
			ar[i] = c;

		return (ar);
	}
}
