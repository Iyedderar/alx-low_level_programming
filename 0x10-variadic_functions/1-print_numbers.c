#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - Prints nbrs separated.
 * @n: The number of paramters passed to the function.
 * @...: The numbers to be treated.
 * @separator: The separator.
 *
 * Return: Nothing.
 *
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list f;
	unsigned int i;

	if (separator == NULL)
		separator == "";

	va_start(f, separator);
	va_arg(f, int);
	for (i = 0; i < n; i++)
		printf("%d%s ", va_arg(f, int), separator);

	_putchar('\n');

	va_end(f);
}
