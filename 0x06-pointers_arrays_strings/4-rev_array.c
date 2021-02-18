#include "holberton.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @*a: array
 * @n: position
 * Return: destiny
 **/

void reverse_array(int *a, int n)
{
	int i, c = n - 1, x;

	for (i = 0; i < c; i++, c--)
	{
		x = a[i];
		a[i] = a[c];
		a[c] = x;
	}
}
