#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line
 * Return: 0
 **/
void print_diagonal(int n)
{
	int l;
	int c;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		if (l > 0)
		{
			for (c = 0; c < l; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
		else
			_putchar(92);
		_putchar('\n');
	}
}