#include<stdio.h>
/**
 * main - print the alphabet
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 122)
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
