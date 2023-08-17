#include"main.h"
/**
 * print_diagonal - prints numbers
 * Return: void
 * @n: number of lines
 */

void print_diagonal(int n)
{
	int i = 0;

	int j = 0;

	for ( ; i < n; i++)
	{
		j = 0;
		for ( ; j < i; j++)
			_putchar(' ');
		_putchar('\\');
			if (i < n - 1)
		_putchar('\n');
	}
	_putchar('\n');
}

