#include"main.h"
/**
 * puts_half - outputs a string
 * @str: print the second half of the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0, i = 0;

	while (str[i++])
		n++;
	if (n % 2 == 0)
	{
		for (i = n / 2; i < n; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (n + 1) / 2 ; i < n; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
