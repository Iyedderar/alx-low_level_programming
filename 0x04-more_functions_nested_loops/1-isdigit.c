#include"main.h"
/**
 * _isdigit - checks for uppercase characters
 * Return : 1 digit 0 otherwise
 * @c character to check
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

