#include "holberton.h"
/**
 * _puts - prints a string
 *
 * Return: none
 */
void _puts(char *str)
{
	while(*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}