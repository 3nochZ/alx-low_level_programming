#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 */

void more_numbers(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		for (b = 0; b < 15; b++)
		{
			if (b > 14)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		a++;
		_putchar('\n');
	}
}
