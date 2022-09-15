#include "main.h"

/**
 * largest_number - returns the largest of the 3
 * @a : parameter a
 * @b : parameter b
 * @c : parameter c
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
