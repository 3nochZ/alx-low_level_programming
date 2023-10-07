#include <stdio.h>
#include "main.h"

/**
 * malloc_checked -returns a pointer to dynamically allocated memory
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit (98);
	}

	return (a);
}
