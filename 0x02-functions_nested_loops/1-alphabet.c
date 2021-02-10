#include "holberton.h"

/**
 * main - prints alphabet
 * Return: 0
 */

void print_alphabet(void)
{
	int letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
