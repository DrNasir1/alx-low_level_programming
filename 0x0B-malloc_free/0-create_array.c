#include "main.h"

/**
 * create_array - creating array
 * @size : size of array
 * @c: array
 * Return: return chars
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);
	str = (char *) malloc(sizeof(c) * size);

	if (str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(str + i) = c;

	return (str);
}
