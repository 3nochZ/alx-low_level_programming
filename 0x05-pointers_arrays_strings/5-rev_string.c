#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
		len++;
	}

	while (start < end)
	{
		temp = *start;
		*start++ = *end;
		*end-- = temp;
	}
}
