#include <stdio.h>

/**
 * main - reverse lower case
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
