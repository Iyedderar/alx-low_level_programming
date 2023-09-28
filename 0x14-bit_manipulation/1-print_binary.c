#include "main.h"
/**
 * print_binary - from int to binary.
 * @n: uli to convert.
 *
 * Return: binary.
 */

void print_binary(unsigned long int n)
{
	int a;

	a = n * 0.5;
	if (n != 0)
	{
		print_binary(a);
		_putchar(n - a*2 + '0'); 
	}
	else
		return;
}
