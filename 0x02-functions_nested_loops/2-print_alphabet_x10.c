#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int num = 0;

	while( num < 10)
	{
		while( letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		num++;

		letter = 'a';
		_putchar('\n');
	}
}
