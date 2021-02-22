#include "holberton.h"
/**
 * _memcpy - locates a string's character
 * @dest: destiny
 * @src: source
 * @n: num
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
