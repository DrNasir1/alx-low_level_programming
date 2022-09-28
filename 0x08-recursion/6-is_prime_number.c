#include "main.h"

int real_prime(int n, int j);

/**
 * is_prime_number - check prime num
 * @n : parameter n
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
 * real_prime - real prime
 * @n: par n
 * @j: par j
 * Return: int
 */

int real_prime(int n, int j)
{
	if (j == 1)
		return (1);
	if (n % j == 0 && j > 0)
		return (0);
	return (real_prime(n, j - 1));
}
