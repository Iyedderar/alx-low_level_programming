#include "main.h"

/**
 * _abs - prints absolute value
 * @n: the integer operated on
 * Return: the absolute value of the number
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		if (n < 0)
		{
			return (-n);
		}
		else
		{
			return (0);
		}
	}
}
