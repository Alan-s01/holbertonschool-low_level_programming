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
	unsigned int i, i2, i3, i4;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (i2 = 0; s2[i2] != '\0'; i2++)
		;
	if (n >= i2)
		n = i2;

	s = malloc(sizeof(char) * (i + n + 1));
	if (s == NULL)
		return (NULL);

	for (i3 = 0; s1[i3] != '\0'; i3++)
		s[i3] = s1[i3];
	for (i4 = i; i2 < i + n; i4++)
		s[i4] = s2[i4 - i];

	s[i4] = '\0';
	return (s);
}

