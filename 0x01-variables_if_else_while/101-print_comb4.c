#include<stdio.h>
/**
* main - print numbers
* Return: 0 on success
*/
int main (void)
{
	for (int i = '0'; i <= '9'; i++)
		for (int j = i + 1; j <= '9'; j++)
			for (int k = j + 1; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7')
					break;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
