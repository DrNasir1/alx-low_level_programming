#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc in work
 * @b: int b
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *size;

	size = malloc(b);
	if (size == NULL)
		exit(98);
	return (size);
}
