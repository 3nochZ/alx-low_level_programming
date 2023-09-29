#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number
 * Return: 0
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (0);
	}

	else if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
