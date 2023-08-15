#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	for (; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
		_putchar(c);
		c++;
		};
	_putchar('\n');
	}
}
