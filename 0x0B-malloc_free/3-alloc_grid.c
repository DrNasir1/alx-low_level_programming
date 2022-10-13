#include "main.h"

/**
 * alloc_grid - allocating grid
 * @width: width of array
 * @height: height of array
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	/* i should have declared size as grid */
	int **size, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	size = malloc(sizeof(int *) * height);

	if (size == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{

		size[i] = malloc(sizeof(int) * width);
		if (size[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(size[i]);
			free(size);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
	{
	}
	size[i][j] = 0;
	return (size);
}
