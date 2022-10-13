#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * @array: array name
 * @size: size of the array
 * @action: action to be done on each element of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (!array || !action)
		return;

	for (j = 0; j < size; j++)
		action(array[j]);
}
