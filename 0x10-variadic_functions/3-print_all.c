#include "variadic_functions.h"

/**
 * print_all - print all kind of data types
 * @format: format of the input
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, k = 0, j;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), k = 1;
			break;
		case 's':
			str = va_arg(valist, char *);
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
		} i++;
	}
	printf("\n"), va_end(valist);
}
