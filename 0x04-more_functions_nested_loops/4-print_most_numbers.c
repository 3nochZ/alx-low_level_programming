#include "main.h"

/**
 * print_most_numbers - prints 0 upto 9 without 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if ((i == 2) || (i == 4))
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
