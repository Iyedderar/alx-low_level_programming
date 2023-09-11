#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - a function to intilize new dog parametrs .
 * @d: the dog.
 * @name: dog's name.
 * @age: dog's age.
 * @owner: dog's owner.
 * Return:  nothing
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
