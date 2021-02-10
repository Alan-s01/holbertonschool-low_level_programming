#include "holberton.h"

/**
 * main - prints an alphabet
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
