#include "main.h"

/**
 * _strstr -  searches a string for any of a set of bytes.
 * @haystack: source string
 * @needle: accept bytes
 * Return: If a match is found - ptr to first occurrence of c
 *		   If not - nullptr
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (*haystack != needle[i])
			{
				break;
			}
			if (needle[i + 1] == '\0')
				return (haystack);
		}
		haystack++;
	}
	return (0);
}
