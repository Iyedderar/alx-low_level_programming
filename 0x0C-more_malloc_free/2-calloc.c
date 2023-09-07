#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function allocates memory for array of elements .
 * @nmemb: nbr of elements.
 * @size: size of one element in bytes.
 * Return:  pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *f;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	f = malloc(size * nmemb);

	if (f == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		*((char *)f + i) = 0;
	return (f);
}
