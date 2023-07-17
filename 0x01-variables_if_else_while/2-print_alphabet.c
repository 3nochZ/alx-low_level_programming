#include <stdio.h>

/**
 * main - lower case
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
