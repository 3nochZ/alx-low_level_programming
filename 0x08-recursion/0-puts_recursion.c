#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - the function puts but by recursion
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	_putchar('\n');
}
