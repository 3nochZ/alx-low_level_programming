#include "main.h"

/**
 * print_diagonal - prints slashes
 * @n: number of dashes to be printed
 */

void print_diagonal(int n)
{
	int j;
	
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
