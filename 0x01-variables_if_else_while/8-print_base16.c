#include<stdio.h>
/**
 * main - print the alphabet
 * Return: 0 on success
 */
int main(void)
{
	char i = '0';

	for ( ; i <= '9' ; i++)
		putchar(i);
	i = 'a';
	for ( ; i < 'g' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
