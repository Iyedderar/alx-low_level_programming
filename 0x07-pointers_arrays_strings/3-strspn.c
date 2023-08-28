#include "main.h"

/**
 * _strspn - Returns the number of bytes in the initial segment
 *           of s which consist only of bytes from accept
 * @s: source string
 * @accept: accept bytes
 * Return: ptr to dest
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, n = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == '\0')
				return (n);
			if (*s == accept[i])
			{
				n++;
				break;
			}
		}
		s++;
	}
	return (n);
}
