#include "main.h"

/**
 * _puts_recursion -  implementation of puts function using recursion
 * @s: source string
 * Return:does not return nthn
 */

void _puts_recursion(char *s)
{
	_putchar(*s)
	if (*(s++) == '\0')
                return;
	_puts_recursion((s++));
}
