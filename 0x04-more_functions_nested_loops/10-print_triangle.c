#include"main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		j = size - 1;
		for ( ; j >= 0; j--)
		{
		if (j <= i)
			_putchar('#');
		else
			_putchar(' ');
		}
		_putchar('\n');
	}
}
