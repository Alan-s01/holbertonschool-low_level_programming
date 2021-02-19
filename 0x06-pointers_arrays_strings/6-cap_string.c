#include "holberton.h"

/**
 * *cap_string - capitalize a string
 * @s: array
 * Return: none
 */

char *cap_string(char *s)
{
	int i, j;
	char x[] = {'}', ')', '?', '!', '"', '.', '\n',
		'\t', ',', ';', ' ', '(', '{'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; x[j] != '\0'; j++)
			if (s[i] == x[j])
			{
				i++;
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] = s[i] - 32;
			}
	}
	return (s);
}

