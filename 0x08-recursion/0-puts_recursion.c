#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - the function puts but by recursion
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(*s[i + 1]);
	}

	_putchar('\n');
}
