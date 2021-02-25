#include "holberton.h"
/**
 * _memset - fills memory with a constant byte
 * @s: string
 * Return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
