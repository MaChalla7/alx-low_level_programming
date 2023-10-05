#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create a 2d integer grid using malloc.
 * Description: Each element of the grid should be initialized to 0.
 * @width: int size width
 * @height: int size height
 * Return: Pointer to new grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int m, n;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(*grid));
	if (grid == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(width * sizeof(**grid));
		if (grid[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(grid[m]);
			free(grid);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			grid[m][n] = 0;
	}

	return (grid);
}
