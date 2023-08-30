#include "main.h"

/**
 * _print_rev_recursion -  implementation of a function
 * that prints string in reverse
 * @s: source string
 * Return:does not return nthn
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
