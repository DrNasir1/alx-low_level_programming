#include "main.h"

/**
 * free_grid - freeing the grid
 * @grid : the array
 * @height: array height
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
