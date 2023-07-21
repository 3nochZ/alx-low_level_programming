#include "main.h"

/**
 * _isdigit - checks for numbers between 0 and 9, inclusive
 * @c: input to be checked
 * Return: 1 if succesfull, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
