#include "holberton.h"

/**
 * array_range - creates an array of ints
 * @min: min int
 * @max: max int
 * Return: int
 */

int *array_range(int min, int max)
{
	int *a;
	int i, j;

	j = 0;

	if (min > max)
		return (NULL);

	a = malloc(sizeof(int) * (max - min + 1));
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++, j++)
		a[j] = i;

	return (a);
}
