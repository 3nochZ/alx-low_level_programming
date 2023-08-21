#include "main.h"
#include <stddef.h>

/**
 * puts2 - returns every other character
 * @str: pointer to string to print
 */

void puts2(char *str)
{
	if (str == NULL)
	{
		return;
	}

	else
	{
		int i = 0;

		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i += 2;
		}
	}

	_putchar('\n');
}
