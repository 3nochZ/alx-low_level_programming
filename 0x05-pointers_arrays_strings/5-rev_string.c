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
	int right = len;

	while (*s != 0)
	{
		len++;
		s++;
	}
	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
