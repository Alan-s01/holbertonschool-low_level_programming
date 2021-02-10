#include "holberton.h"

/**
 * main - prints the largest number
 * Return: 0
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else if (a == b)
	{
		largest = a;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

