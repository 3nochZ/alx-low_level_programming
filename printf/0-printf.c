#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format != '\0') {
        if (*format == '%') {
            format++; // Move past '%'

            // Check the conversion specifier
            switch (*format) {
                case 'c': {
                    // Print a single character
                    int c = va_arg(args, int);
                    _putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    // Print a string
                    const char *s = va_arg(args, const char *);
                    while (*s != '\0') {
                        _putchar(*s);
                        s++;
                        count++;
                    }
                    break;
                }
                case '%': {
                    // Print a literal '%'
                    _putchar('%');
                    count++;
                    break;
                }
            }
        } 
	else 
	{
            // Print regular characters
            _putchar(*format);
            count++;
        }

        format++; // Move to the next character in the format string
    }

    va_end(args);
    return count;
}
