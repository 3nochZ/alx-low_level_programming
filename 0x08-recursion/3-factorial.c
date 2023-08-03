#include "main.h"

/**
 * factorial - gives the factorial of a number
 * @n: number
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 1 ||  n == 0)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}


