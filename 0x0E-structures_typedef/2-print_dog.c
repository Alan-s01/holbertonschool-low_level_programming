#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: data struct
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return(NULL);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
}
