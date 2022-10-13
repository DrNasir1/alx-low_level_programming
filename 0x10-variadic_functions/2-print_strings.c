#include "variadic_functions.h"

/**
 * print_strings - printing strings
 * @separator: separator
 * @n: argcount
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *str1;
	unsigned int i;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		str1 = va_arg(str, char *);
		if (str1)
			printf("%s", str1);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}
