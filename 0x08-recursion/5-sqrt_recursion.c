#include "main.h"
#include <stdio.h>

/**
 * sqrt_helper - performs recursive calculation
 * @n: number
 * @start: possible square root
 * Return: square root
 */

int sqrt_helper(int n, int start)
{
	if (start * start == n)
	{
		return (start);
	}

	else if (start * start > n)
	{
		return (-1);
	}

	else
	{
		return (sqrt_helper(n, start + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number in a square root
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (sqrt_helper(n, 0));
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	r = _sqrt_recursion(4096);
	printf("%d\n", r);
	return (0);
}
