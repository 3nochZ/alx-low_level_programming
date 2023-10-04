#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new duplicate string
 * @str: string
 * Return: duplicate
 */

char *_strdup(char *str)
{
	int len;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	duplicate = malloc((len + 1) * sizeof(char));

	if(duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
