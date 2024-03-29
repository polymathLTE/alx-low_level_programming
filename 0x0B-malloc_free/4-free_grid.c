#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @grid: given 2D array
 * @height: given height of array
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
		return;

	for (; height >= 0; height--)
		free(grid[height]);

	free(grid);
}
