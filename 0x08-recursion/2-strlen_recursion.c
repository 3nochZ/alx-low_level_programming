#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - finds string length
 * @s: pointer
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (1);
	}

	len = len + _strlen_recursion(s + 1);

	return (len - 1);
}
