#include "holberton.h"
/**
 * check - perform the operations and checks if it is a prime number
 * @n: num
 * @i: ind
 * Return: 1 or 0
 **/
int check(int n, int i)
{
	if ((n % i) == 0)
		return (0);
	if ((i * i) > n)
		return (1);
	return (check(n, i + 1));
}

/**
 * is_prime_number - Check if the entered number is prime
 * @n: num
 * Return: 1 o 0
 **/
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check(n, 2));
}
