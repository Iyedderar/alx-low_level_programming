#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: source string
 * @accept: accept bytes
 * Return: If a match is found - ptr to first occurrence of c
 *		   If not - nullptr
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
		for (i = 0; accept[i]; i++)
			if (*s == accept[i])
				return (s);
	return (0);
}
