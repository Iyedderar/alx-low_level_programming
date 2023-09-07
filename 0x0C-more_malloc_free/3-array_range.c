#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array created should contain
 * all the values, ordered from min to max .
 * @min: nbr of elements.
 * @max: size of one element in bytes.
 * Return:  the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *f;
	int i,size;

	size = max - min + 1;
	if (min > max)
		return (NULL);

	f = malloc(max - min + 1);
	if (f == NULL)
		return (NULL);

	for (i = 0; i < (size); i++)
		f[i] = min++;
	return (f);
}
