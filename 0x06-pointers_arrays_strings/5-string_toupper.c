#include "holberton.h"

/**
 * *string_toupper - changes lowercase string to uppercase strings
 * @a: array
 * Return: none
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
