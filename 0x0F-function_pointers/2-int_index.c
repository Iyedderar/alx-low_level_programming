#include "function_pointers.h"

/**
* int_index - search function.
* @size: size of the array.
* @cmp: function to be applied.
* @array: array to be processed
* Return: return the index of element or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
