#include "main.h"

/**
 * _strlen_recursion -  implementation of a function
 * strlen using recursion
 * @s: source string
 * Return:the length of a given string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
