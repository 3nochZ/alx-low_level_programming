#include "main.h"

/**
 * times_table - multiplication table 1-9
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			else 
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
				
		}
		_putchar('\n');
	}
}

