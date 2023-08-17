#include"main.h"
/**
 * more_numbers - prints numbers
 * Return: void
 */

void more_numbers(void)
{
	int a = 0;

	while (a <= 14)
	{
		if (a >= 10)
		_putchar('0' + a / 10);
	_putchar('0' + a % 10);
	a++;
	}
	_putchar('\n');
}

