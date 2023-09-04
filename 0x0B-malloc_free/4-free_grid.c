#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function free 2d array.
 * @height: nbr of rows
 * @grid: pointer to the 2d array
 * Return:  nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
