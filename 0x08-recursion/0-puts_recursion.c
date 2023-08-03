#include "main.h"

/**
 * _puts_recursion - prints a string by using a recursion
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s = '\0')
	{
		return ('\n');
		return 0;
	}

	_putchar(*s);
	_puts_recusion(s + 1);
}
