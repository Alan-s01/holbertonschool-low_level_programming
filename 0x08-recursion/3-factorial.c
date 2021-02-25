#include "holberton.h"
/**
 * factorial - returns factorial
 * @n: factor
 * Return: n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
