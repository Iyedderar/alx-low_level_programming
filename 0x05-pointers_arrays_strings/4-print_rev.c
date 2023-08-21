#include"main.h"
/**
 * print_rev - print a string in reverse
 * @s: the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	s--;
	for ( ; n > 0; n--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
