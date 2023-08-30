#include "main.h"

/**
 * factorial  -  implementation of a function
 * that calculates the factorial of a foven integer
 * @n: integer to be processed
 * Return: the factorial
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
