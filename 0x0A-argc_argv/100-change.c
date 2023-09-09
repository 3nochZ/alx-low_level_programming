#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: array of string literal
 * Return: 0
 */

int main(int argc, char **argv)
{
	int cents, num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (1);
	}

	num += cents / 25;
	cents %= 25;

	num += cents / 10;
	cents %= 10;

	num += cents / 5;
	cents %= 5;

	num += cents / 2;
	cents %= 2;

	num += cents;

	printf("%d\n", num);
	return (0);
}
