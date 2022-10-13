#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - print name
 * @f: pointer to function
 * @name: name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
