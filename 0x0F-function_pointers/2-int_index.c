#include "function_pointers.h"

/**
 * int_index - index of matches
 * @array: name of the array
 * @size: size of array
 * @cmp: compare function to pointers
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
