#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array  -  function that creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array.
 * @c: The char to be initialized.
 *
 * Return: -NULL if size = 0.
 *         -a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *f = (char *)malloc(size);
	int i = 0;

	if (size == 0 || f == NULL)
		return (NULL);
	for (; i < size; i++)
		f[i] = c;

	return (f);
}
