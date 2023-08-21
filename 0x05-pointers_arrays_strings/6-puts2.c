#include"main.h"
/**
 * puts2 - outputs a string
 * @str: the string
 *
 * Return: void
 */
void puts2(char *str)
{
	int n = 0, i = 0;

	while (str[i++])
		n++;
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 1)
			continue;
		_putchar(str[i]);
	}
	_putchar('\n');
}
