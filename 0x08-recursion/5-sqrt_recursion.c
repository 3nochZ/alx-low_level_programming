#include <stdio.h>
#include "main.h"

int sqrt_helper(int num, int i)
{
	if (i * i > num)
	{
		return (-1);
	}

	else if (i * i == num)
	{
		return (i);
	}

	return (sqrt_helper(num, i + 1));
}

/**
 * _sqrt_recursion - calculates square roots
 * @n: number
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (sqrt_helper(n, 0));
}
