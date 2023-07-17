#include <stdio.h>

/**
 * main - lower case
 * Return: 0 if successful
 */
int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);
}
