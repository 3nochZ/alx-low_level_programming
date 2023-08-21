#include "main.h"
#include <stddef.h>

/**
 * puts_half - prints the second half of a string
 * str: string to be printed
 */

void puts_half(char *str)
{
	if (str == NULL)
	{
		return;
	}

	else
	{
		int len = _strlen(*str);
		int n = length / 2;
		int i;

		if (len / 2 == 1)
		{
			n += 1;
		}

		else
		{
			for (i = n; i < len; i++)
			{
				_putchar(str[i]);
			}
		}
	}

	_putchar('\n');
}
