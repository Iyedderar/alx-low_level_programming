#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination
 * @src: source
 *
 * Return: pointer to char dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
