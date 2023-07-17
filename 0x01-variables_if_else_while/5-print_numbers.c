#include <stdio.h>

/**
 * main - numbers
 * Return: 0 if successful
 */
int main(void)
{
	char num = '0';

	while (num < '10')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
