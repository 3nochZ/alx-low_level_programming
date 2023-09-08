#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg vector
 * Retutn: 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	if (argc < 3)
	{
		if (argc == 2)
		{
			printf("%s\n", argv[1]);
			return (1);
		}

		else
		{
			printf("0\n");
			return (1);
		}
	}

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
}
