#include"main.h"

/**
 * swap_int - swaps values of two integers.
 * @a: int to swapped.
 * @b: int to swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
