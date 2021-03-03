#include "holberton.h"

/*
 * str_concat - concatebates 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL or string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, i1, i2, i3;
	char *s;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		i1 = 0;
	else
	{
		for (i1 = 0; s2[i1]; i1++)
			;
	}
	i2 = i + i1 + 1;
	s = malloc(sizeof(char) * i2);
	if (s == NULL)
		return (NULL);
	for (i3 = 0; i3 < i; i3++)
		s[i3] = s1[i3];
	for (i3 = 0; i3 < i1; i3++)
		s[i3 + i] = s2[i3];
	s[i + i1] = '\0';
	return (s);
}
