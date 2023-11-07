#include "dog.h"
#include <stdio.h>

/**
 * init_dog - program initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: desired name to initialize
 * @age: desired age to initialize
 * @owner: desired owner to initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
