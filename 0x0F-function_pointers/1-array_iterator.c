#include "function_pointers.h"

/**
* array_iterator - function that prints name.
* @size: size of the array.
* @action: function to be applied.
* @array: array to be processed
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0 || array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);

}
