#include <stdio.h>
#include "main.h"

/**
 * prime_helper - helper function
 * @num: number
 * @i: iterator
 * Return: factor
 */

int prime_helper(int num, int i)
{
	if (i == 1)
	{
		return (0);
	}

	else if (num % i == 0 && i > 0)
	{
		return (0);
	}
	
	return(prime_helper(num, i - 1));
}

/**
 * is_prime_number: finds out a prime number
 * @n: number
 * Return: 1
 */

int is_prime_number(int n)
{
	if (n =< 1)
	{
		return (0);
	}

	return (prime_helper(n, i - 1));
}
