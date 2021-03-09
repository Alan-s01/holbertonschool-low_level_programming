#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *s, char *cp);
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	if (name == NULL)
		new_d->name = NULL;
	else
	{
		new_d->name = malloc(_strlen(name) + 1);
		if (new_d->name == NULL)
		{
			free(new_d);
			return (NULL);
		}
		new_d->name = _strcpy(new_d->name, name);
	}
	if (owner == NULL)
		new_d->owner = NULL;
	else
	{
		new_d->owner = malloc(_strlen(owner) + 1);
		if (new_d->owner == NULL)
		{
			free(new_d->name);
			free(new_d);
			return (NULL);
		}
		new_d->owner = _strcpy(new_d->owner, owner);
	}
	new_d->age = age;
	return (new_d);
}
/**
 * _strlen - counts string's lenght
 * @s: string
 * Return: string's lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * _strcpy - copies a string
 * @s: string
 * @cp: copy string
 * Return: copied string
 */
char *_strcpy(char *s, char *cp)
{
	char *c = s;

	while (*cp)
		*c++ = *cp++;
	*c = '\0';
	return (c);
}
