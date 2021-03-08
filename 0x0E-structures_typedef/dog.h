#ifndef DOG_H

#define DOG_H

/**
* struct dog - new type
* @name: string
* @age: float
* @owner: string
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
