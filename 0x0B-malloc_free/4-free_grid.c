#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid -  frees a 2 dimensional grid
 * @grid: 2 dimensional grid
 * @height: height dimension of the grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int r;

	for (r = 0; r < height; r++)
	{
		free(grid[r]);
	}
	free(grid);
}
