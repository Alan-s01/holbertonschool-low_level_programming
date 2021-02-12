#include "holberton.h"

/**
 * more_numbers - prints 10 times numbers
 * Return: none
 */
void more_numbers(void)
{
	int t, q;

	for (t = 0; t <= 9; t++)
	{
		for (q = 0; q <= 14; q++)
		{
			if (q >= 10)

				_putchar (q / 10 + '0');
			_putchar (q % 10 + '0');

		}
		_putchar('\n');
	}
}