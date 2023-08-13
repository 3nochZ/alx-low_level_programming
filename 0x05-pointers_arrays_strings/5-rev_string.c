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

	while (*s != 0)
	{
		len++;
		s++;
	}

	int right = len;

	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
