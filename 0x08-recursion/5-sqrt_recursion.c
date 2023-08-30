#include "main.h"

/**
 * sqrt_helper - performs recursive calculation
 * @n: number
 * @start: second parameter
 * @end: thrid parameter
 */

int sqrt_helper(int n, int start, int end)
{
	int mid;

	if (start > end)
	{
		return (-1);
	}

	mid = start + (end - start) / 2;
	int square = mid * mid;

	if (square == n)
	{
		return (n);
	}

	else if (square < n)
	{
		return (sqrt_helper(n, mid + 1, end));
	}

	else
	{
		return (sqrt_helper(n, start, mid - 1));
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
		return sqrt_helper(n, 0, n);
	}
}
