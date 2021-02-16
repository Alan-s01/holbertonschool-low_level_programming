#include "holberton.h"
/**
 * _strlen - returns the lenght str
 *
 * Return: string
 */
int _strlen(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return(i);
}
