#include "function_pointers.h"

/**
 * int_index - searches an integer
 * @array: array
 * @size: size
 * @cmp: function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int i, v;

	if (size <= 0)
		return (-1);

	if (size != NULL && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			v = cmp(array[i]);
			if (v != 0)
				return (i);
		}
	}
	return (-1);
}

