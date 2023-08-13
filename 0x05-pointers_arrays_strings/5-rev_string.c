#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	const char *end = s;

	if (s == NULL)
	{
		return;
	}

	while (*end != '\0')
	{
		end++;
		len++;
	}

	while (len > 0)
	{
		_putchar(*(end - 1));
		end--;
		len--;
	}
}
