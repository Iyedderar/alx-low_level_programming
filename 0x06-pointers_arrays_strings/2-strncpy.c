#include "main.h"

/**
 * _strncpy - copies n char from src to dst
 * @dest: destination string
 * @src: source string
 * @n: number of char copied
 *
 * Return: ptr to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, ns = 0;

	while (src[i++])
		ns++;
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for (i = ns; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
