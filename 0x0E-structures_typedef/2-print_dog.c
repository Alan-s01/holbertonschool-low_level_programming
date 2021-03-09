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

	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
	else
		printf("Name: (nil)\n")
}
