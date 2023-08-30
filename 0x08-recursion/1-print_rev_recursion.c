#include "main.h"

/**
 * _print_rev_recursion -  implementation of a function
 * that prints string in reverse
 * @s: source string
 * Return:does not return nthn
 */

void _print_rev_recursion(char *s);
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}
