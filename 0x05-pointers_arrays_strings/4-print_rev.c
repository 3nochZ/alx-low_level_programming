#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string to be printed
 */

void print_rev(char *s)
{
	int length = _strlen(*s);
	int z = length - 1;
	
	while (z >= 0)
	{
		_putchar(s[z]);
		z--;
	}

	_putchar('\n');
}
