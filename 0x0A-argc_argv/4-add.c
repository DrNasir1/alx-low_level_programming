#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success 1 error
 */

int main(int argc, char *argv[])
{
	int i, sum, num, k;

	sum = 0;
	if (argc == 0)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		for (k = 0; argv[i][k] != '\0'; k++)
		{
			if (argv[i][k] > '9' || argv[i][k] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
