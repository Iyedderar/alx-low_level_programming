#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all arguments supplied.
 * @n: nbr of arguments.
 * @...: optional arguments.
 * Return: the sum .
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list f;
	unsigned int i, sum = 0;

	va_start(f, n);
	for (i = 0; i < n; i++)
		sum += va_arg(f, int);
	va_end(f);
	return (sum);
}
