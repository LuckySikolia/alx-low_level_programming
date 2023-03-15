#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: input pointer to grid or 2D array
 * @height: 2d array height
 * Return: a pointer to 2d array or Null on failure
 * Null if width or height is 0
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
