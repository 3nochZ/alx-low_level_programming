#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0 if succesful
 */
int main(void)
{
	char c = '0';
	
	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'a';

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return 0;
}
