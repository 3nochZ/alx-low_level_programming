#include "main.h"

/**
 * _print_rev_recursion
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	int len = 0;
	
	while (s[len] != '\0')
	{
		len++;
	}

	_putchar(s[len - 1]);
	_print_rev_recursion(s + len - 1);
}
