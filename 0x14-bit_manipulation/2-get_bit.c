#include "main.h"
/**
 * get_bit - get the bit at an index.
 * @n: uli to search in.
 * @index: index of the bit wanteed
 * Return: bit or -1 at failure.
 */

int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
