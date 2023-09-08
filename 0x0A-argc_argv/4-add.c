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
	int i;
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
			if (isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
			}

			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
