#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	for(n = 0; n < 5; n++)
	{
		printf("%d", a[n]);
		if(n < 4)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}