#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strup - returns a pointer to a new duplicate string
 * @str: string
 * Return: Duplicate
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
	duplicate = malloc((len + 1) *sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}

int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
