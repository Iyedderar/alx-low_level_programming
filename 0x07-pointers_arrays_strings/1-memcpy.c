#include "main.h"

/**
 * _memcpy - copies n bytes from source to destination
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be filled
 *
 * Return: ptr to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for ( ; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
