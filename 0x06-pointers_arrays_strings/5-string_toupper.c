#include "main.h"

/**
 * string_toupper - converts string to uppercase
 * @str: the string to be in uppercase
 *
 * Return: ptr to str
 */
char *string_toupper(char *str)
{
	int i = 0;

	for ( ; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
			str[i] -= 32;
	}
	return (str);
}
