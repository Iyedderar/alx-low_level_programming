#include<stdio.h>
/**
* main - print numbers
* Return: 0 on success
*/
int main (void)
{
	int i = '0';

	int j, k;


	for ( ; i <= '9'; i++)
	{
		j = i + 1;
		for ( ; j <= '9'; j++)
		{
			k = j + 1;
			for ( ; k <= '9'; k++)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == '7')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
