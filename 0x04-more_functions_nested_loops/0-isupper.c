#import"main.h"
/**
 *_isupper - checks for uppercase characters
 *Return : 0 if uppercase 1 otherwise
 *@c character to check
 */

int _isupper(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

