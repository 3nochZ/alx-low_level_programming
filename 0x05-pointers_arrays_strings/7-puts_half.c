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
		int i;
		int len = _strlen(str);
		int n = len / 2;

		if (len % 2 == 1)
		{
			n += len / 2;
		}

		else
		{
			for (i = n; i < len; i++)
			{
				_putchar(s[i]);
			}
		}
	}

	_putchar('\n');
}
