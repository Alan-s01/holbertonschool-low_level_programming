#include "holberton.h"
/**
 *print_numbers - prints numbers
 *Return:0
 */
void print_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		_putchar(d);
	}
	_putchar('\n');
}