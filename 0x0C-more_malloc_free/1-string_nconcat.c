#include "holberton.h"

/**
 * string_nconcat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: num
 * Return: NULL or string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, i, i2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;
	for (c2 = 0; s2[c2] != '\0'; c2++)
		;
	if (n >= c2)
		n = c2;

	s = malloc(sizeof(char) * (c1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = c1; j < c1 + n; i2++)
		s[i2] = s2[i2 - c1];

	s[i2] = '\0';
	return (s);
}

