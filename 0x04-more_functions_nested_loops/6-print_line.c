#include "main.h"

/**
 * print_line - prints line using dashes
 * @n: number of dashes to be printed
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		return;
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

