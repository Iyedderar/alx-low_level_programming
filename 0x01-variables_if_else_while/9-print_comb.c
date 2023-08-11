#include<stdio.h>
/**
 * main - print numbers
 * Return: 0 on success
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
	putchar(c);
	if (c == '9')
		break;
	putchar(',');
	putchar(' ');
	c++;
	}
	putchar('\n');
	return (0);
}
