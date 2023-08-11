#include <stdio.h>
#include <math.h>

/**
 * largestPrimeFactor - finds the largest prime factor
 * @n: number
 * Return: largest prime factor
 */

long largestPrimeFactor(long n)
{
	long factor = 2;

	while (factor * factor <= n)
	{
		if (n % factor == 0)
		{
			n /= factor;
		}

		else
		{
			factor += (factor == 2) ? 1 : 2;
		}
	}

	if (n > 1)
	{
		return (n);
	}
	else
	{
		return (factor);
	}
}

/**
 * main - finds largest prime factor
 * Return: 0 if successfull
 */

int main(void)
{
	long num = 612852475143;

	printf("%ld\n", largestPrimeFactor(num));

	return (0);
}
