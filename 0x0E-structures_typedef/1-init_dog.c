#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: pointer
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, cahr *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
