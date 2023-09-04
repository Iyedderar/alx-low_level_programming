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
	int **f, j = 0, i = 0;

	if (width == 0 || height == 0)
		return (NULL);
	f = malloc(sizeof(int *) * height);
	if (f == NULL)
		return (NULL);
	for (; i < height; i++)
	{
		f[i] = malloc(sizeof(int) * width);
		if (f[i] == NULL)
		{
			for (; i >= 0; i--)
				free(f[i]);

			free(f);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (; j < width; j++)
			f[i][j] = 0;
	return (f);
}
