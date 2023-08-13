#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int len = 0;
	int left = 0;

	while (s[len] != 0)
	{
		len++;
	}

	while (left < len)
	{
		char temp = s[left];

		s[left] = s[len - 1];
		s[len - 1] = temp;

		left++;
		len--;
	}
}
