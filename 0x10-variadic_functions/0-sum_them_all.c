#include "variadic_functions.h"

/**
 * sum_them_all - sum them all
 * @n: numb3r of arg expected
 *
 * Return: return int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglists;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(arglists, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(arglists, unsigned int);
	va_end(arglists);

	return (sum);
}
