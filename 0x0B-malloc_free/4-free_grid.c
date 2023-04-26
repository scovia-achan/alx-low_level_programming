#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array
 * @grid: grid to free up
 * @height: no of rows in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	j = 0;
	while (j < height)
	{
		free(grid[j]);
		j++;
	}
	free(grid);
}
