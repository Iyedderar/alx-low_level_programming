#include<stdio.h>
/**
 * main - print the alphabet
 * Return: 0 on success
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
