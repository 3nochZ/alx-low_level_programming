#include <stdio.h>

/**
 * main - two digit combination
 * Return: 0 if successful
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 9)
	{
		int num2 = num1 + 1;

		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 < 8)
			{
				putchar(',');
				putchar(' ');
			}

			num2++;
		}

		num1++;
	}

	putchar('\n');

	return (0);
}
