#include "main.h"

/**
 * print_line - prints line using dashes
 * @n: number of dashes to be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

