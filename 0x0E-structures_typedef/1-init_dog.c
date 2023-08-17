#include <stdio.h>
#include "main.h"

/**
 * init_dog - function
 * @d: param
 * @name: name of dog
 * @age: age of dog
 * owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
