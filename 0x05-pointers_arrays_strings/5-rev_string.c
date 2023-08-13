#include "main.h"
#include <stddef.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int left = 0;
	int right = _strlen(s) - 1;

	while (left < right)
	{
		char temp = s[left];
		s[left] = s[right];
		s[right] = temp;

		left++;
		right--;
	}
}
