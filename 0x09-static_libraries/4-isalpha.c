#include "main.h"

/**
 * _isalpha - detects an alphabet
 * @c: parameter
 * Return: 1 if succesful
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
