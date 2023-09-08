#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: string literal
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i;
	int product = 1;

	if (argc < 3)
	{
		printf("error\n");
		return (1);
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}

		printf("%d\n", product);
	}

	return (0);
}	
