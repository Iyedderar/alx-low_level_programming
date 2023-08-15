#include "main.h"

/**
 * print_sign - checks the sign of an integer
 * @n: the integer to be checked
 * Return: 1 when positif and 0 when zero and -1 when negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		else
		{
			_putchar('0');
			return (0);
		}
	}
}

