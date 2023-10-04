#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat -returns a pointer to a a concatenated string
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len, len1;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1);
	len1 = strlen(s2);

	concat = malloc((len + len1 + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcpy(concat, s2);

	return (concat);
}
