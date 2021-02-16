#include "holberton.h"

/**
 * puts_half - prints half string
 *
 * Return: none
 */

void puts_half(char *str)
{
	int i, c, d;
	c = 0;
	while(*str != '\0')
	{
		c++;
		str++;
	}
	d = c / 2;
	for(i = 0; i < d; i++)
	{
		str--;
	}
	for(i = 0; i <= d; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
