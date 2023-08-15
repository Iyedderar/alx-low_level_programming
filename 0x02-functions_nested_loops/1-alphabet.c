#include "main.h"
/**
 * main - print the alphabet except e and q
 * Return: 0 on success
 */
int main(void)
{
	char c;
	
	c= 'a';
	while(c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
        return (0);
}
