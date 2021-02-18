#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: string1
 * @s2: string2
 * Return: difference
 **/

int _strcmp(char *s1, char *s2)
{
	int i = 0, d = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;

	if (s1[i] != s2[i])
		d = s1[i] - s2[i];

	return (d);
}