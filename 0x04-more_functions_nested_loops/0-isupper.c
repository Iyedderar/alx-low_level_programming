#include"main.h"
/**
 * _isupper - checks for uppercase characters
 * Return : 1 if uppercase 0 otherwise
 * @c character to check
 */

int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);
}

