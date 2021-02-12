#include "holberton.h"

/**
 * print_line - draws lines
 * Return: none.
 */
void print_line(int n)
{
	int i;
	{
		for (i = 0; i < n; i++)
			_putchar ('_');
	}
	_putchar ('\n');
}