#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: destiny
 * @src: source
 * @n: num
 * Return: destiny
 */

char *_strncat(char *dest, char *src, int n);
{
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (k = 0; k < n; k++;)
	{
		dest[i = k] = src[k];

		if (src[k] == '\0')
		{
			break;
		}
	}
	return (dest)
}
