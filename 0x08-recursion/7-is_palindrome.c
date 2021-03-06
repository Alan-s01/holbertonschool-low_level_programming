#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: s
 */
int _strlen(char *s)
{
	if (*s != '\0')
		return (1 + _strlen(++s));
	return (0);
}

/**
 * _palindrome - e
 * @s: string
 * @len: sting's length
 * @stop: stop
 * Return: 1 if palindrome, 0 otherwise
 */
int _palindrome(char *s, int len, int stop)
{
	if (*s != *(s + len))
		return (0);
	if (len >= stop)
		return (_palindrome(s + 1, len - 2, stop));
	return (1);
}

/**
 * is_palindrome - returns if a string is palindromic
 * @s: string
 * Return: s
 */
int is_palindrome(char *s)
{
	int len;
	int stop;

	len = _strlen(s);

	if (len % 2 == 0)
		stop = (len / 2) - 1;
	else
		stop = len / 2;

	if (len == 0)
		return (1);

	return (_palindrome(s, len - 1, stop));
}
