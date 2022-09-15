#include <stdio.h>

/**
 * main - entry
 * Return: return 0
 */

int main(void)
{
	long int i, n;

	n = 612852475143;

	for (i = 1; i < 60000000; i++)
	{
		if ((i > 60000) && (n % i) == 0)
		{
			printf("%ld\n", i);
		}
	}
	return (0);
}
