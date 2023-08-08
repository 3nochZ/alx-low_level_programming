#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it.
 * @unsigned int size: parameter one
 * @c:  char
 * Return: array
 */

char* create_array(unsigned int size, char c)
{
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	char* array = (char*)malloc(size * sizeof(char));

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}
	}

	return (array);
}
