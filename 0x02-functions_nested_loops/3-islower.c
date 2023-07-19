#include "main.h"

/**
 * _islower - detect lowercase
 * @c: int c
 * Return: 1 if successful, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
