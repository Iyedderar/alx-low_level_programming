#include "main.h"

/**
 * _strchr - copies n bytes from source to destination
 * @s: the string to check
 * @c: char to look for in s
 *
 * Return: ptr to first occurrence of c or null if not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for ( ; s[i]; i++)
		if (s[i] == c)
			return (s + i);
	return (NULL);
}
