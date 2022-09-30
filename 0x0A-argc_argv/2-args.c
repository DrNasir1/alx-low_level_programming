#include <stdio.h>
#include "main.h"

/**
 * main - main func
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
