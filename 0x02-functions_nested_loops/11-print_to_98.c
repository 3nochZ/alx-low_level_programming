#include <stdio.h>

/**
 * print_to_90 - print from number given to 90
 * @n: number
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (int i = n; i <= 98; i++) 
		{
			if (i == 98) 
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	} 
	else
	{
		for (int i = n; i >= 98; i--)
		{
			if (i == 98) 
			{
				printf("%d\n", i);
			}
			else
			{
				printf("%d, ", i);
			}
		}
	}
}
