#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer operated on
 * Return: the absolute value of the number
 */

int print_last_digit(int n)
{
	int r;

	r = _abs(n) % 10;
	_putchar(r + '0');
	return (r);

}
