#include<stdio.h>
/**
 * main - print the alphabet except e and q
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 122)
	{
	if (c == 'e' || c == 'q')
	{
	c++;
	continue;
	}
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
