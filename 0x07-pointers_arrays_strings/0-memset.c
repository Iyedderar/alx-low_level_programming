#include "main.h"

/**
 * _memset - fills the first n bytes of the memory with b
 * @s: ptr to area in memory to fill
 * @b: char to fill with
 * @n: number of bytes to be filled
 *
 * Return: ptr to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		s[i] = b;
	return (s);
}
