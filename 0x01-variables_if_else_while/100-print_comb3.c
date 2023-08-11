#include<stdio.h>
/**
 * main - print numbers
 * Return: 0 on success
 */
int main(void)
{
	int c = '0';

	int j, i = '1';

	for (; c <= '9'; c++)
	{	
	for (j = i; j <= '9'; j++)
	{
		putchar(c);
		putchar(j);
		if (c == '8')
			break;
		putchar(',');
		putchar(' ');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
