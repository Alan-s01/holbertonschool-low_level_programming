#include "holberton.h"

/**
 * *leet - encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, j, k;
	char a[] = "oOlLeEaAtT";
	char b[] = "0011334477";
	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (a[j] != '\0')
		{
			if (s[i] == a[j])
			{
				k = j;
				s[i] = b[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}

