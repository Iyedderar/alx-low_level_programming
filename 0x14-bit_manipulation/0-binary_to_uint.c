#include "main.h"
/**
 * binary_to_uint - from binary to uint.
 * @b: pointer to binary str.
 *
 * Return: Uint or 0 at failure.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ret = 0, len = 0, i = 0, multi = 1;

	if (*b == '\0')
		return (0);
	for (; b[i]; i++)
		len++;
	for (i = len - 1; i > 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			ret += multi * 1;
		multi *= 2;
	}
	return (ret);
}
