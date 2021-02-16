#include "holberton.h"

/**
 * puts2 - prints characters
 *
 * Return: none
 */

void puts2(char *str)
{
	while(*str != '\0')
	{
		if(*str % 2 == 0)
		{
			_putchar(*str);
			str++;
		}
		else if(*str == 9)
		{
			break;
		}
		else
		{
			str++;
		}
	}
	_putchar('\n');
}