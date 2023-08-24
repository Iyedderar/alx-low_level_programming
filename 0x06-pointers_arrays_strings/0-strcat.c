#include "main.h"

/**
 *_strcat - concatenates  two strings
 *@dest: destination string
 *@src: source string
 *
 * Return: returns poiner to dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i++])
		n++;

	for (i = 0; src[i]; i++)
	{
		dest[n] = src[i];
		n++;
	}
	return (dest);
}

