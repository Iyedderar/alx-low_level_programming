#include<stdio.h>
#include"main.h"
/**
 *times_tables - prints out times table
 *Return: void
 */

void times_table(void)
{
	int i = 0;

	int j = 0;

	for ( ; i < 10; i++)
	{
	j = 0;
	for ( ; j < 10; j++)
	{
	if (j == 0)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
	}
	putchar(('0' + i * j / 10) == '0' ? ' ' : '0' + i * j / 10);
	putchar('0' + i * j % 10);
	if (j == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	}
}

