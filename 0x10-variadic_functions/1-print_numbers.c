#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * void print_numbers - prints numbers followed by a new line
 * @separator: string in between numbers
 * @n: numbers count
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list num;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(num, int));

		if (separator == NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(num);
}
