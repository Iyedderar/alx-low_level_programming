#include "variadic_functions.h"
/**
 * sum_them_all - function to sum all arguments supplied.
 * @n: mandatory arguments.
 * @'...': optional arguments.
 * Return: the sum .
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list f;
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_start(f, n);
	for (i = n; f != NULL ; i = va_arg(f, const unsigned int))
		sum += i;
	return (sum);
}
