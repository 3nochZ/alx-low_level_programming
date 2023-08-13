#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	const char *end = s;

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
	_putchar('\n');
}
