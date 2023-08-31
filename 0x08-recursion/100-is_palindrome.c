#include "main.h"

/**
 * is_symmetric - Checks if a string is symteric.
 * @s: The str to be checked.
 * @len: The length.
 *
 * Return: If the number is symteric - 1.
 *         If the number is not symteric- 0.
 */
int is_symmetric(char *s, int len)
{
	if (len == 0 || len == 1)
		return (1);

	if (*s == *(s + (len - 1)))
		return (1 && is_symmetric(*s, len - 2));
	else
		return (0);
}

/**
 * is_palindrome - Checks if a string is palindrome.
 * @s: The string tobe checked.
 *
 * Return: If the integer is not palindrome - 0.
 *         If the number is palindrome - 1.
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (is_symmetric(s, len));
}
