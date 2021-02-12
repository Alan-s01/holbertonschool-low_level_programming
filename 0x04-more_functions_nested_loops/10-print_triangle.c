#include "holberton.h"
/**
 * print_triangle - prints a triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				c = (size - a) - 1;
				if (b < c)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
