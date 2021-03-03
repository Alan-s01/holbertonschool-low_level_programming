#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * @str: string
 * Return: NULL or 0
 */

char *_strdup(char *str)
{
	unsigned int i = 0;
	char *nstr;

	if (str == 0)
		return (0);

	while (str[i] != '\0')
		i++;

	nstr = malloc(sizeof(char) * (i + 1));

	if (nstr == 0)
		return (0);

	else
	{
		for (i = 0; str[i] != '\0'; i++)
			nstr[i] = str[i];

		nstr[i] = '\0';
		return (nstr);
	}
}

