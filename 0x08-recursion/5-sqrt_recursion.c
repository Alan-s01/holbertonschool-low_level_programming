#include "holberton.h"
/**
 * multi - search n by multiplying 1:1
 * @n: nat
 * @i: ind
 * Return: i
 */
int multi(int n, int i)
{
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (multi(n, (i + 1)));
}

/**
 * _sqrt_recursion - returns natural square
 * @n: nat
 * Return: square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (multi(n, 0));
}
