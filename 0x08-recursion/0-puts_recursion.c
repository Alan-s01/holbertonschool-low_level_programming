#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string
 * @b: byte
 * @n: num
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(&s[1]);
	}
}