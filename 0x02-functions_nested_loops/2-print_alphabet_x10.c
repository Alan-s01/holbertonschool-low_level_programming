#include "holberton.h"

/**
 * main - prints alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int letter;
	int loops;

	for (loops = 1; loops <= 10; loops++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
