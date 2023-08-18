#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints info about dog
 * @d: info
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	else
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %.2f\n", d->age >= 0.0 && d->age <= 100.0 ? d->age : -1.0);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
