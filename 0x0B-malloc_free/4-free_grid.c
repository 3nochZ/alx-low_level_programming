#include <stdlib.h>

/**
 * free_grid - frees 2D grid previuosly created
 * @grid: address of 2D grid
 * @height: height
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
