#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function allocated memory .
 * @b: size of memory allocated
 * Return:  pointer to the memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *f;

	f = malloc(b);
	if (f == NULL)
		exit(98);
	return (f);
}
