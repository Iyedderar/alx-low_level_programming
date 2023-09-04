#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: nbr of columns
 * @height: nbr of rows
 * Return:  2D array Each element of the grid should be initialized to 0
 */
int **alloc_grid(int width, int height)
{
	int **f, i = 0;

	if (width == 0 || height == 0)
		return (NULL);
	f = (int **)malloc(height);
	for (; i < height; i++)
	{
		f[i] = (int *)malloc(width);
	}
	return (f);
}

