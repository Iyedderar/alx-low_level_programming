#include<stdio.h>
#include"main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: starting number
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
	{
		if (n == 98)
		printf("%d", n);
		else
		printf("%d, ", n);
	++n;
	}
	}
	else
	{
	while (n >= 98)
	{
	printf(n == 98 ? "%d" : "%d, ", n);
	--n;
	}
	}
	printf("\n");
}
