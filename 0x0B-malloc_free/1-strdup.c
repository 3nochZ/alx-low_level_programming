#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strup - returns a pointer to a new duplicate string
 * @str: string
 * Return: Duplicate
 */

char _strdup(char *str)
{
	if (str == NULL)
	{
		return(NULL);
	}

	int length = strlen(str);
	char *duplicate = malloc((length + 1) *sizeof(char));

	if (duplicate == NULL)
	{
		return(NULL);
	}

	strcpy(duplicate, str);
	return(duplicate);
}
