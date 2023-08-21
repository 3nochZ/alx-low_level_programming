#ifndef MAIN_H
#define MAIN_H

void reset_to_98(int *n);

void swap_int(int *a, int *b);

void _puts(char *str);

int _putchar(char c);

void print_rev(char *s);

void rev_string(char *s);

int _strlen(char *s)
{
        int length = 0;

        while (*s != '\0')
        {
                length++;
                s++;
        }

        return (length);
}

void puts2(char *str);

void puts_half(char *str);

#endif
