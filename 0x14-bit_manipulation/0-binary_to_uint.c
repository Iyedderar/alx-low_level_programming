#include "main.h"
/**
 * binary_to_uint - from binary to uint.
 * @b: pointer to binary str.
 *
 * Return: Uint or 0 at failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		len++;
	}
	for (len -= 1; len >= 0; len--)
	{
		num += (b[len] - '0') * mult;
		mult *= 2;
	}
	return (num);
}
