#include "holberton.h"

/**
 * _strchr - locates a string's char
 * @s: string
 * @c: char
 * Return: s or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}

