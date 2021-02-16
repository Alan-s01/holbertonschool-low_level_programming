#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints an array
 *
 * Return: none
 */
void print_array(int *a, int n)
{
	for (n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
		if (n < 4)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}