#include<stdio.h>
/**
 * main - print the alphabet
 * Return: 0 on success
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
	putchar(c);
	c--;
	}
	putchar('\n');
	return (0);
}
