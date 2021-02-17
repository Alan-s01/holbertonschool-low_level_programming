#include "holberton.h"

/**
 * swap_int - take a pointer and updates the value
 * @a: swap a's value
 * @b: swap b's value
 * Return: none
 */

void swap_int (int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

