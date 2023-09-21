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
		separator = "";

	va_start(f, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(f, int));
		printf("%s", separator);
	}
	printf("\n");

	va_end(f);
}