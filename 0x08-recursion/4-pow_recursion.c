#include "main.h"

/**
 * _pow_recursion - returns x raised to y, but recursive
 * @x: num 1
 * @y: num 2
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
