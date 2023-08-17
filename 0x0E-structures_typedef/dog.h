#ifndef DOG_H
#define DOG_H

/**
 * struct dog - data structure that represents a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
