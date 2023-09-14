#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - Prints strs separated.
 * @n: The number of paramters passed to the function.
 * @...: The strs to be treated.
 * @separator: The separator.
 *
 * Return: Nothing.
 *
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list f;
	unsigned int i;
	char *s = "";

	if (separator == NULL)
		separator = "";

	va_start(f, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(f, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1))
		printf("%s", separator);
	}
	printf("\n");

	va_end(f);
}
