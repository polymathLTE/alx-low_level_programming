#include "main.h"

/**
 * alloc_grid - function returns a pointer to a 2 dim. array of integers
 * @width: given integer
 * @height: given integer
 *
 * Description: return a 2 dim. array with given params. and cell values as '0'
 *
 * Return: (grid) success (NULL) failure/error
 */

int **alloc_grid(int width, int height)
{
	int i, j = 0;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*assigns the dim. of the 2D array - column*/
	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (grid);

	/*assigns the dim. of the 2D array - row*/
	for (i = 0; i <= height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/*free the occupied memory*/
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);

}
