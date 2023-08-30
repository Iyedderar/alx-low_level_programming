#include "main.h"

/**
 * _puts_recursion -  implementation of puts function using recursion
 * @s: source string
 * Return:does not return nthn
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion((s++));
	}
	else
		_putchar('\n');

}
