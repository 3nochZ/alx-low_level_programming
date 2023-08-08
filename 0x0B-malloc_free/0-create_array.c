#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it.
 * @size: parameter one
 * @c:  char
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
