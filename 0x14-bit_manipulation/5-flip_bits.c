#include "main.h"
/**
 * flip_bits - sets the value of a bit at a given index.
 * @n: uli 1.
 * @m: uli 2.
 *
 * Return: nbr of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
