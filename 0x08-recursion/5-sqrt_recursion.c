#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @n: The number to find the square root of.
 * @s: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int n, int s)
{
	if ((s * s) == n)
		return (s);

	if (s == n / 2)
		return (-1);

	return (find_sqrt(n, s + 1));
}

/**
 * _sqrt_recursion  -  sqrt function recursion
 * @n: integer
 * Return: the result
 */

int _sqrt_recursion(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);

		return (find_sqrt(n, s));
}
