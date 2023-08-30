#include "main.h"

/**
 * prime_helper - Finds the natural square root of an inputted number.
 * @n: The number to be checked.
 * @s: The divisor
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int prime_helper(int n, int s)
{
	if (n % s == 0)
		return (0);

	if (s == n / 2)
		return (-1);

	return (prime_helper(n, s + 1));
}

/**
 * is_prime_number -  prime function recursion
 * @n: integer
 * Return: the result
 */

int is_prime_number(int n)
{
	int s = 0;

	if (n < 0)
		return (-1);

	if (n == 2 || n == 3)
		return (1);

	return (prime_helper(n, s));
}
