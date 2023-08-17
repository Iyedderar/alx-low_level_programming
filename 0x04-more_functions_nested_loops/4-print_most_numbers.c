#include"main.h"
/**
 * print_most_numbers - prints numbers
 * Return: void
 */

void print_most_numbers(void)
{
	int a = '0';

	while (a <= '9')
	{
		if (a == '2' || a == '4')
		{
			a++;
			continue;
		}
	_putchar(a);
	a++;
	}
	_putchar('\n');
}

