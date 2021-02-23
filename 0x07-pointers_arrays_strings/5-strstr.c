#include "holberton.h"
/**
 * _strstr - locates a sub-string
 * @haystack: string
 * @needle: substring
 * Return: substring or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *c;

	while (*haystack)
	{
		c = haystack;
		a = needle;
		while (*a == *haystack && *a)
		{
			haystack++;
			a++;
		}
		if (*a == '\0')
			return (c);
		haystack = c + 1;
	}
	return (0);
}

