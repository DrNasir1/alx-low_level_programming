#include "main.h"

int real_sqrt_recursion(int n, int j);

/**
 * _sqrt_recursion - sqrt recursion
 * @n : parameter n
 * Return: return int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - real sqrt recursion
 * @n : parameter n
 * @j : parameter j
 * Return: return int
 */

int real_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (real_sqrt_recursion(n, j + 1));
}
