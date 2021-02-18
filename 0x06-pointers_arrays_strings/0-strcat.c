#include "holberton.h"

/**
 * _strcat - concatenates two strings
 * @dest: destiny
 * @src: source
 * Return: destiny
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i + k] = src[k];
	}
	return (dest);
}
