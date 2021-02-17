#include "holberton.h"
/**
 * _strlen - returns the lenght str
 *
 * @s: counts string's lenght
 *
 * Return: string
 */
int _strlen (char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
