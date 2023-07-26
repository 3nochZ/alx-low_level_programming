#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
