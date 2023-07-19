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

			if (result == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0');
				_putchar(',');
			}
			else if (result < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
				_putchar(',');
			}
			else if (result < 100)
			{
				if (result % 9 = 0)
				{
					_putchar(' ');
					_putchar('result / 10 + '0');
					_putchar('result % 10 + '0');
				}
				else if
				{
					_putchar(' ');
					_putchar(result / 10 + '0');
					_putchar(result % 10 + '0');
					_putchar(',');
				}
			}
		}
		_putchar('\n');
	}
}

