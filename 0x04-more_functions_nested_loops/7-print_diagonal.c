#include"main.h"
/**
 * print_diagonal - prints numbers
 * Return: void
 * @n: number of lines
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
	int i = 0;

	int j = 0;

	for ( ; i < n; i++)
	{
		j = 0;
		for ( ; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
}

