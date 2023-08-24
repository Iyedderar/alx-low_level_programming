#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The number of char from src to be added to dest.
 *
 * Return: ptr to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, no = 0;

	while (dest[i++])
		no++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[no] = src[i];
		no++;
	}

	return (dest);
}
