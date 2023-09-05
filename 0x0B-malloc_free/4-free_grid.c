#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2D grid
 * @grid: pointer to the grid(array)
 * @height: heoght of the grid
 *
 * Description: "free 2D grid"
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
