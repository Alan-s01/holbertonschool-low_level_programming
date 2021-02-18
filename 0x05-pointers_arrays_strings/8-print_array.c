#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 *
 * @a: variable
 *
 * @n: array's data
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
