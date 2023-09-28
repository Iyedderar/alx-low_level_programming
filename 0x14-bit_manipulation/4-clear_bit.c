#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given index.
 * @n:pointer to The bit.
 * @index: The index to get the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - sets the bit to 0.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8) || n == NULL)
		return (-1);

	*n = *n & (0 << index);
	return (1);
}