#include<stdio.h>
#include"main.h"
/*
 *times_tables - prints out times table
 *Return: void
 */

void times_table(void)
{
	int i = 0;

	int j = 0;

	for ( ; i < 10; i++)
	{
	for ( ; j < 10; j++)
	{
	putchar('0' + i * j / 10);
	putchar('0' + i * j % 10);
	if (j == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	}
}	
