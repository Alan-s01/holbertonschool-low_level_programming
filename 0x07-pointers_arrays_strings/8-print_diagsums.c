#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the diagonals
 * @a: array
 * @size: size
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int s1 = 0;
	int s2 = 0;

	for (; i < size; i++)
	{
		s1 = s1 + *(a + ((size + 1) * i));
	}
	for (i = size; i > 0; i--)
	{
		s2 = s2 + *(a + ((size - 1) * i));
	}
	printf("%d, %d\n", s1, s2);
}

