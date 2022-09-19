#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate token
 * Return: returns 0
 */

int main(void)
{
	int i, j;
	time_t t;

	srand((unsigned int) time(&t));
	for (i = 0; i < 2772; i += j)
	{
		j = rand () % 128;
		if ((i + j) > 2772)
		{
			break;
		}
		printf("%c", j);
	}
	printf("%c\n", (2772 - j));

	return (0);
}
