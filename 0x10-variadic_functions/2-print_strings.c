#include <stdio.h>
#include <stdarg.h>
#include "vf.h"
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: yk sth like , or ;
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *sp;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		sp = va_arg(strings, char *);

		if (sp == NULL)
			printf("(nil)");
		else
			printf("%s", sp);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strings);
}
